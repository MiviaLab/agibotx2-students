# 🤖 Developing on the AgiBot X2 robot — student instructions

You will work in a **container** on the robot's development unit: an Ubuntu 22.04 environment with
ROS 2 Humble, the AimDK SDK, the GPU, and access to the robot's topics and services. The container is
yours: you can install packages and experiment without risk of breaking the robot.

Official SDK documentation: <https://x2-aimdk.agibot.com> (pick your robot's version),
or locally in `~/aimdk/docs`.

> [!CAUTION]
> 🛑 **Read the safety rules in [EXAMPLES.md](EXAMPLES.md#safety-rules) before running anything that moves the robot.**

---

## 1. Connecting

1. Connect your PC to the lab Wi-Fi **MiviaLab**.
2. Open a terminal (Linux/macOS: Terminal; Windows: PowerShell) and connect:

   ```bash
   ssh -p 2222 studente@10.0.10.201
   ```

   - Password: `mivia`
   - The first time you connect, answer `yes` when asked about the key fingerprint.
3. You are now **inside the container**, in the `/home/studente` folder. You can tell from the
   welcome message and from the prompt `(container-studenti)studente@agi:~$`
   (`agi` is the machine name: the container shares its network, but not its files). To leave: `exit`
   (the container stays on and your files are kept).

### Handy: SSH configuration

In the `~/.ssh/config` file on your PC (on Windows `C:\Users\<you>\.ssh\config`):

```
Host agibot
    HostName 10.0.10.201
    Port 2222
    User studente
```

From then on, `ssh agibot` is enough.

### VS Code

1. Install the **Remote - SSH** extension.
2. `F1` → *Remote-SSH: Connect to Host…* → `agibot` (needs the SSH configuration above).
3. The first time, VS Code asks for the remote machine's operating system: choose **Linux**.
4. Enter the password (`mivia`).
5. *File → Open Folder…*, type `/home/studente` and confirm (re-enter the password if asked).
   Next time the folder shows up among the recent ones.

VS Code now shows the container's files, and its integrated terminal (*Terminal → New Terminal*)
is already inside the container.

---

## 2. What you will find

| Path | Contents |
|---|---|
| `~/README.md`, `~/STUDENT-GUIDE.md`, `~/EXAMPLES.md` | this documentation: your home **is** this repository |
| `~/EXAMPLES.md` | guide to the examples: what they do and how to use them |
| `~/<group>_ws` | your group's ROS 2 workspace, where you write your code (see [section 5](#5-developing-your-own-code)) |
| `~/aimdk` | your copy of the AimDK SDK (loaded automatically) |
| `~/aimdk/src/aimdk_msgs` | robot messages and services (⛔ **do not modify**) |
| `~/aimdk/src/examples` | C++ examples |
| `~/aimdk/src/py_examples` | Python examples |
| `~/aimdk/topics_and_services` | list of available topics and services |
| `~/aimdk/docs` | local documentation |
| `~/foxglove` | scripts to visualize robot data with Foxglove (see [section 6](#6-visualizing-data-with-foxglove)) |
| `/opt/agibot` | read-only copy of the robot's firmware messages and 3D model (used by Foxglove) |

> [!WARNING]
> 👥 The home folder `/home/studente` is **shared by all** students using this account:
> each group works only in its own workspace, and **do not delete other people's work**.

---

## 3. The SDK environment

ROS 2 and the AimDK SDK workspace (`~/aimdk`) are **loaded automatically in every new terminal**
(SSH and VS Code): you can use `ros2 run py_examples …` and `aimdk_msgs` right away. The SDK is
already built: do not rebuild it and do not modify it.

> [!IMPORTANT]
> 🔁 If `ros2 run py_examples …` fails with `Package 'py_examples' not found`, the SDK has not been
> built yet: tell the instructor. In a non-interactive shell (e.g. a script), load it by hand:
> `source /opt/ros/humble/setup.bash && source ~/aimdk/install/local_setup.bash`.

---

## 4. Checking that everything works

```bash
ros2 topic list                                        # robot topics
ros2 interface package aimdk_msgs                      # SDK messages
ros2 topic echo --once /aima/hal/joint/arm/state       # arm joint state
ros2 run py_examples play_tts                          # Python example: the robot speaks
```

Making the robot speak directly:

```bash
ros2 service call /aimdk_5Fmsgs/srv/PlayTts aimdk_msgs/srv/PlayTts "{tts_req: {text: 'Ciao', domain: 'test', trace_id: 't1', is_interrupted: true, priority_weight: 0, priority_level: {value: 6}}}"
```

What each example does and how to launch it: **[EXAMPLES.md](EXAMPLES.md)** (in the container:
`~/EXAMPLES.md`; open it in VS Code, or with `less ~/EXAMPLES.md` in the terminal). More details in
chapters 4.6, 4.7 and 6 of the documentation.

---

## 5. Developing your own code

> [!IMPORTANT]
> 🗂️ **Every group creates its own ROS 2 workspace** in the home folder and writes **all** its code
> there, as ROS 2 packages. Do not write code in `~/aimdk` or in other groups' workspaces.

ROS 2 and the AimDK SDK are already loaded in every terminal ([section 3](#3-the-sdk-environment)),
so your workspace is built **on top of** the SDK and can use `aimdk_msgs` directly.

```
~/<group>_ws/              your group's workspace (e.g. ~/group3_ws)
├── src/                   your packages: this is where you write code
│   └── <package>/
├── build/                 ┐
├── install/               ├ generated by colcon build: do not edit
└── log/                   ┘
```

### 1. Create the workspace (once per group)

```bash
mkdir -p ~/<group>_ws/src
cd ~/<group>_ws
colcon build
```

> [!TIP]
> 💡 Use a name that identifies your group (e.g. `group3_ws`), so it is clear whose workspace it is.

### 2. Create a package

Python:

```bash
cd ~/<group>_ws/src
ros2 pkg create --build-type ament_python --dependencies rclpy aimdk_msgs --node-name my_node my_package
```

C++:

```bash
cd ~/<group>_ws/src
ros2 pkg create --build-type ament_cmake --dependencies rclcpp aimdk_msgs --node-name my_node my_package
```

`--node-name` also creates a first node (`my_package/my_package/my_node.py` or
`my_package/src/my_node.cpp`) that you can edit.

### 3. Build and run

```bash
cd ~/<group>_ws                       # always build from the workspace root, never from src/
colcon build --symlink-install        # or only one package: --packages-select my_package
source install/setup.bash
ros2 run my_package my_node
```

- **After every build, and in every new terminal**, load your workspace:
  `source ~/<group>_ws/install/setup.bash` (the SDK is loaded automatically, your workspace is not).
- With `--symlink-install`, changes to existing Python files are picked up without rebuilding;
  new nodes, new files or changes to `setup.py` / `CMakeLists.txt` need a new `colcon build`.
- ⛔ Do not add your workspace to `~/.bashrc`: the home folder is shared with the other groups.

### 4. Starting from an SDK example

Copy the example into your package, register it and rebuild. For a Python package:

```bash
cp ~/aimdk/src/py_examples/py_examples/head_control.py ~/<group>_ws/src/my_package/my_package/
```

In `~/<group>_ws/src/my_package/setup.py`, add the node to `console_scripts`:

```python
'head_control = my_package.head_control:main',
```

Then:

```bash
cd ~/<group>_ws && colcon build --symlink-install && source install/setup.bash
ros2 run my_package head_control 0.1
```

For C++ copy the `.cpp` file into `my_package/src/` and add it to `CMakeLists.txt` with
`add_executable`, `ament_target_dependencies` and `install(TARGETS ...)` (see
`~/aimdk/src/examples/CMakeLists.txt`).

> [!TIP]
> 💾 Your workspaces are not part of this repository. To keep your code safe, version it in your
> own git repository (e.g. `cd ~/<group>_ws/src/my_package && git init`) and push it to your account.

---

## 6. Visualizing data with Foxglove

[Foxglove](https://foxglove.dev) shows the robot's data in the browser: cameras, lidar, joints,
3D model. It works in two parts: a **bridge** runs in the container, reading ROS topics and
sending them over the network; you connect to the bridge from your PC's browser.

### Starting the bridge (in the container)

```bash
~/foxglove/run.sh
```

The script loads the robot's message definitions, publishes the 3D model (URDF) on
`/robot_description`, and starts the bridge on port **8765**. Keep the terminal open; press
`Ctrl+C` to stop it.

- The bridge is **read-only**: you cannot send commands to the robot from Foxglove.
- Topics too heavy for Wi-Fi (uncompressed images, full point cloud) are not transmitted:
  use the `.../compressed` and `..._down_sampling` versions.

> [!WARNING]
> 🔌 **One port per person:** if another student has already started the bridge, use a different port
> (`~/foxglove/run.sh 8766`, `8767`, …), otherwise you get the error `address already in use`.

### Connecting from the browser

1. Open <https://app.foxglove.dev> (Chrome or Edge) and sign in with an account.
2. **Open connection** → **Foxglove WebSocket** → `ws://10.0.10.201:8765`
   (with the port you chose).
3. Add panels with **Add panel**: *Image* for cameras, *Plot* or *Raw Messages* for
   joints and IMU, *3D* for lidar and the robot model.

### The robot's 3D model

In the **3D** panel settings (gear icon):

1. **Scene → Mesh up axis → Z-up**: without this, the robot's parts appear scattered.
2. **Frame → Display frame → `pelvis`**.
3. **Custom layers → + → URDF**, Source = **Topic**, topic `/robot_description`.

The model moves together with the robot. The first time you connect, it takes a few seconds to download the meshes.
