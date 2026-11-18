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
| `~/EXAMPLES.md` | guide to the examples: what they do and how to use them (the container's copy of [EXAMPLES.md](EXAMPLES.md)) |
| `~/aimdk` | your copy of the AimDK SDK |
| `~/aimdk/src/aimdk_msgs` | robot messages and services (⛔ **do not modify**) |
| `~/aimdk/src/examples` | C++ examples |
| `~/aimdk/src/py_examples` | Python examples |
| `~/aimdk/topics_and_services` | list of available topics and services |
| `~/aimdk/docs` | local documentation |
| `~/foxglove` | scripts to visualize robot data with Foxglove (see [section 6](#6-visualizing-data-with-foxglove)) |

> [!WARNING]
> 👥 The home folder `/home/studente` is **shared by all** students using this account:
> each of you should work in your own folder, and **do not delete other people's work**.

---

## 3. Loading the SDK

The SDK is already built: no need to rebuild it. **In every new terminal**, load the environment
(ROS is already loaded automatically):

```bash
source ~/aimdk/install/local_setup.bash
```

> [!IMPORTANT]
> 🔁 If you skip this step, `ros2 run py_examples …` fails with `Package 'py_examples' not found`.

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

## 5. Writing your own code

Create your own code folder inside `/home/studente`:

```bash
mkdir ~/<folder_name>
```

> [!TIP]
> 💡 Use a name that identifies you or your group, so it is clear whose folder it is.

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
