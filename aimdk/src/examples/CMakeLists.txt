cmake_minimum_required(VERSION 3.16)
project(examples)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ---------------- Base dependencies ----------------
find_package(ament_cmake REQUIRED)
set(OpenCV_DIR
    /usr/lib/aarch64-linux-gnu/cmake/opencv4
    CACHE PATH "" FORCE)
find_package(aimdk_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(rclcpp REQUIRED)
find_package(ruckig REQUIRED)
find_package(OpenCV REQUIRED COMPONENTS core imgproc imgcodecs)
find_package(CURL REQUIRED)

# ---------------- Keyboard feature switch & ncurses detection ----------------
option(ENABLE_KEYBOARD "Build executables that depend on curses" ON)

# ---------------- Precompiled headers (PCH) ----------------
add_library(examples_pch_base STATIC src/pch_dummy.cpp)
target_include_directories(
  examples_pch_base
  PRIVATE ${OpenCV_INCLUDE_DIRS})
ament_target_dependencies(examples_pch_base rclcpp aimdk_msgs sensor_msgs cv_bridge)
target_precompile_headers(
  examples_pch_base
  PRIVATE
  <rclcpp/rclcpp.hpp>
  <sensor_msgs/msg/image.hpp>
  <sensor_msgs/msg/compressed_image.hpp>
  <sensor_msgs/msg/camera_info.hpp>
  <string>
  <memory>
  <vector>
  <chrono>
  <functional>
  <deque>
  <sstream>)

add_library(examples_pch_opencv STATIC src/pch_dummy.cpp)
target_include_directories(
  examples_pch_opencv
  PRIVATE ${OpenCV_INCLUDE_DIRS})
ament_target_dependencies(examples_pch_opencv rclcpp aimdk_msgs sensor_msgs cv_bridge)
target_precompile_headers(
  examples_pch_opencv
  PRIVATE
  <rclcpp/rclcpp.hpp>
  <sensor_msgs/msg/image.hpp>
  <sensor_msgs/msg/compressed_image.hpp>
  <sensor_msgs/msg/camera_info.hpp>
  <cv_bridge/cv_bridge.h>
  <opencv2/core.hpp>
  <opencv2/imgproc.hpp>
  <opencv2/videoio.hpp>
  <string>
  <memory>
  <vector>
  <chrono>
  <functional>
  <deque>
  <sstream>)

set(OPENCV_TARGETS take_photo echo_camera_rgbd echo_camera_stereo echo_camera_head_rear)
if(DEFINED ENV{ENABLE_KEYBOARD})
  set(ENABLE_KEYBOARD
      "$ENV{ENABLE_KEYBOARD}"
      CACHE BOOL "" FORCE)
endif()

set(HAVE_CURSES FALSE)
if(ENABLE_KEYBOARD)
  # 1) First try the FindCurses module shipped with CMake
  find_package(Curses QUIET) # provides: CURSES_FOUND / CURSES_INCLUDE_DIR / CURSES_LIBRARIES
  if(CURSES_FOUND)
    set(HAVE_CURSES TRUE)
  else()
    # 2) Fall back to pkg-config, supporting both ncursesw and ncurses
    find_package(PkgConfig QUIET)
    if(PKG_CONFIG_FOUND)
      pkg_check_modules(NCURSES QUIET ncursesw)
      if(NOT NCURSES_FOUND)
        pkg_check_modules(NCURSES QUIET ncurses)
      endif()
      if(NCURSES_FOUND)
        set(HAVE_CURSES TRUE)
        set(CURSES_INCLUDE_DIR ${NCURSES_INCLUDE_DIRS})
        set(CURSES_LIBRARIES ${NCURSES_LINK_LIBRARIES})
      endif()
    endif()
  endif()
endif()

# ---------------- HAL executables ----------------
file(GLOB HAL_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_LIST_DIR}/src/hal/*.cpp)
foreach(file ${HAL_SOURCES})
  message(STATUS "add executable for hal: ${file}")
  get_filename_component(filename ${file} NAME_WE)
  add_executable(${filename} ${file})
  target_link_libraries(${filename} ruckig::ruckig)
  ament_target_dependencies(${filename} rclcpp aimdk_msgs sensor_msgs cv_bridge)

  # PCH: OpenCV targets use opencv pch, others use base pch
  if("${filename}" IN_LIST OPENCV_TARGETS)
    target_precompile_headers(${filename} REUSE_FROM examples_pch_opencv)
  else()
    target_precompile_headers(${filename} REUSE_FROM examples_pch_base)
  endif()

  # If the node uses OpenCV (e.g. take_photo, echo_camera_rgbd, echo_camera_stereo), link it explicitly
  if("${filename}" STREQUAL "take_photo")
    message(STATUS "link OpenCV & libcurl to ${filename}")
    target_include_directories(${filename} PRIVATE ${OpenCV_INCLUDE_DIRS})
    target_link_libraries(${filename} ${OpenCV_LIBS} CURL::libcurl)
  elseif(
    "${filename}" STREQUAL "echo_camera_rgbd"
    OR "${filename}" STREQUAL "echo_camera_stereo"
    OR "${filename}" STREQUAL "echo_camera_head_rear")
    message(STATUS "link OpenCV to ${filename}")
    target_include_directories(${filename} PRIVATE ${OpenCV_INCLUDE_DIRS})
    target_link_libraries(${filename} ${OpenCV_LIBS})
  endif()

  install(TARGETS ${filename} DESTINATION lib/${PROJECT_NAME})
endforeach()

# ---------------- UTIL executables ----------------
file(GLOB UTIL_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_LIST_DIR}/src/utils/*.cpp)
foreach(file ${UTIL_SOURCES})
  message(STATUS "add executable for utils: ${file}")
  get_filename_component(filename ${file} NAME_WE)
  add_executable(${filename} ${file})
  target_link_libraries(${filename} ruckig::ruckig)
  ament_target_dependencies(${filename} rclcpp aimdk_msgs sensor_msgs cv_bridge)

  # PCH: OpenCV targets use opencv pch, others use base pch
  if("${filename}" IN_LIST OPENCV_TARGETS)
    target_precompile_headers(${filename} REUSE_FROM examples_pch_opencv)
  else()
    target_precompile_headers(${filename} REUSE_FROM examples_pch_base)
  endif()

  # If the node uses OpenCV (e.g. take_photo, echo_camera_rgbd, echo_camera_stereo), link it explicitly
  if("${filename}" STREQUAL "take_photo")
    message(STATUS "link OpenCV & libcurl to ${filename}")
    target_include_directories(${filename} PRIVATE ${OpenCV_INCLUDE_DIRS})
    target_link_libraries(${filename} ${OpenCV_LIBS} CURL::libcurl)
  elseif(
    "${filename}" STREQUAL "echo_camera_rgbd"
    OR "${filename}" STREQUAL "echo_camera_stereo"
    OR "${filename}" STREQUAL "echo_camera_head_rear")
    message(STATUS "link OpenCV to ${filename}")
    target_include_directories(${filename} PRIVATE ${OpenCV_INCLUDE_DIRS})
    target_link_libraries(${filename} ${OpenCV_LIBS})
  endif()

  install(TARGETS ${filename} DESTINATION lib/${PROJECT_NAME})
endforeach()

# ---------------- MC executables ----------------
file(GLOB MC_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_LIST_DIR}/src/mc/*.cpp)

# Nodes that need ncurses (same as the source file name, without extension)
set(CURSES_TARGETS keyboard)

foreach(file ${MC_SOURCES})
  get_filename_component(filename ${file} NAME_WE)

  # Without ncurses, skip these targets: including <curses.h> would break the build
  if("${filename}" IN_LIST CURSES_TARGETS AND (NOT ENABLE_KEYBOARD OR NOT HAVE_CURSES))
    message(WARNING "Skipping ${filename}: curses backend not available")
    continue()
  endif()

  message(STATUS "add executable for mc: ${file}")
  add_executable(${filename} ${file})
  ament_target_dependencies(${filename} rclcpp aimdk_msgs)
  target_precompile_headers(${filename} REUSE_FROM examples_pch_base)

  # Add include dirs and libraries only to the targets that need ncurses
  if("${filename}" IN_LIST CURSES_TARGETS)
    if(CURSES_INCLUDE_DIR)
      target_include_directories(${filename} PRIVATE ${CURSES_INCLUDE_DIR})
    endif()
    if(CURSES_LIBRARIES)
      target_link_libraries(${filename} ${CURSES_LIBRARIES})
    endif()
    # Some distributions also need tinfo
    if(DEFINED CURSES_TINFO_LIBRARY)
      target_link_libraries(${filename} ${CURSES_TINFO_LIBRARY})
    endif()
    target_compile_definitions(${filename} PRIVATE NCURSES_WIDECHAR=1)
  endif()

  install(TARGETS ${filename} DESTINATION lib/${PROJECT_NAME})
endforeach()

# ---------------- Interaction executables ----------------
file(GLOB INTERACTION_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_LIST_DIR}/src/interaction/*.cpp)
foreach(file ${INTERACTION_SOURCES})
  message(STATUS "add executable for interaction: ${file}")
  get_filename_component(filename ${file} NAME_WE)
  add_executable(${filename} ${file})
  ament_target_dependencies(${filename} rclcpp aimdk_msgs)
  target_precompile_headers(${filename} REUSE_FROM examples_pch_base)
  install(TARGETS ${filename} DESTINATION lib/${PROJECT_NAME})
endforeach()

# ---------------- HDS executables ----------------
file(GLOB HDS_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_LIST_DIR}/src/hds/*.cpp)
foreach(file ${HDS_SOURCES})
  message(STATUS "add executable for hds: ${file}")
  get_filename_component(filename ${file} NAME_WE)
  add_executable(${filename} ${file})
  ament_target_dependencies(${filename} rclcpp aimdk_msgs)
  target_precompile_headers(${filename} REUSE_FROM examples_pch_base)
  install(TARGETS ${filename} DESTINATION lib/${PROJECT_NAME})
endforeach()

# ---------------- Data ----------------
install(DIRECTORY data/ DESTINATION lib/${PROJECT_NAME}/data)

# ---------------- Tests ----------------
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
