cmake_minimum_required(VERSION 3.15)

project(ruckig LANGUAGES CXX)

# Find ROS 2 dependencies
find_package(ament_cmake REQUIRED)

# Build the core ruckig library (static or shared, controlled by BUILD_SHARED_LIBS)
add_library(
  ruckig
  src/ruckig/brake.cpp
  src/ruckig/position_first_step1.cpp
  src/ruckig/position_first_step2.cpp
  src/ruckig/position_second_step1.cpp
  src/ruckig/position_second_step2.cpp
  src/ruckig/position_third_step1.cpp
  src/ruckig/position_third_step2.cpp
  src/ruckig/velocity_second_step1.cpp
  src/ruckig/velocity_second_step2.cpp
  src/ruckig/velocity_third_step1.cpp
  src/ruckig/velocity_third_step2.cpp)

target_compile_features(ruckig PUBLIC cxx_std_17)

target_include_directories(
  ruckig
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
         $<INSTALL_INTERFACE:include>)

# Alias so the library can be used as ruckig::ruckig
add_library(ruckig::ruckig ALIAS ruckig)

# Compiler warning suppression
if(MSVC)
  target_compile_definitions(ruckig PUBLIC _USE_MATH_DEFINES)
else()
  target_compile_options(ruckig PRIVATE -Wall -Wextra -Wno-unused-parameter)
endif()

# Install targets
install(
  TARGETS ruckig
  EXPORT ruckig_targets
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES
  DESTINATION include)

# Install headers
install(
  DIRECTORY include/
  DESTINATION include
  FILES_MATCHING
  PATTERN "*.hpp")

# Export targets
ament_export_targets(ruckig_targets HAS_LIBRARY_TARGET)
ament_export_dependencies(ament_cmake)
ament_export_include_directories(include)
ament_export_libraries(ruckig)

# Install CMake config files
ament_package()
