# 🤖 AgiBot X2 — Student Workspace

![Robot](https://img.shields.io/badge/robot-AgiBot%20X2-blue)
![ROS 2](https://img.shields.io/badge/ROS%202-Humble-22314E?logo=ros)
![Ubuntu](https://img.shields.io/badge/Ubuntu-22.04-E95420?logo=ubuntu&logoColor=white)
![SDK](https://img.shields.io/badge/SDK-AimDK-green)
[![Safety](https://img.shields.io/badge/safety-read%20the%20rules-red)](EXAMPLES.md#safety-rules)

Instructions for students developing on the **AgiBot X2** humanoid robot in the MiviaLab
(Cognitive Robotics course).

Each student works in a **container** on the robot's development unit. The container runs
Ubuntu 22.04 with ROS 2 Humble, the AimDK SDK and GPU access, and it can reach the robot's
topics and services. You can install packages and experiment there without risk of breaking the
robot's system.

> [!CAUTION]
> ### 🛑 Safety first
>
> - 🚫 **Never make the robot walk or move its legs**, not with the examples and not with your own code.
> - 👨‍🏫 Run examples that **move the robot only with the instructor present**, with the robot standing in a clear area.
> - ⚠️ Use **only** the `SD`, `HO` and `URS` control modes: **other modes make the robot fall**.
> - 1️⃣ Run **one node at a time**. Press `Ctrl+C` to stop.
>
> Full rules: [EXAMPLES.md → Safety rules](EXAMPLES.md#safety-rules).

---

## 📚 Contents of this repository

| Path | Description |
|---|---|
| [STUDENT-GUIDE.md](STUDENT-GUIDE.md) | **Start here.** How to connect (SSH, VS Code Remote-SSH), what is in the container, how to load the SDK, how to check that everything works, and how to view robot data with Foxglove. |
| [EXAMPLES.md](EXAMPLES.md) | Guide to the AimDK SDK examples: robot control modes, moving the head and arms, cameras and sensors (including YOLO object detection), audio (TTS, microphones, Whisper transcription), display and lights, diagnostics. |
| [aimdk/](aimdk) | The students' copy of the AgiBot AimDK SDK (ROS 2 workspace): messages, C++ and Python examples. Build output (`build/`, `install/`, `log/`) and the HTML docs are not versioned. |
| [foxglove/](foxglove) | `run.sh` starts the Foxglove bridge; `pub_urdf.py` publishes the robot's 3D model. |

> [!NOTE]
> On the robot this repository is mounted directly as the students' home folder (`/home/studente`)
> in the container: what you see in `~` is this repository.

### Quick links

- 🔌 [Connecting to the container](STUDENT-GUIDE.md#1-connecting)
- 🗂️ [What you will find in the container](STUDENT-GUIDE.md#2-what-you-will-find)
- 📦 [Loading the SDK](STUDENT-GUIDE.md#3-loading-the-sdk)
- ✅ [Checking that everything works](STUDENT-GUIDE.md#4-checking-that-everything-works)
- 📊 [Visualizing data with Foxglove](STUDENT-GUIDE.md#6-visualizing-data-with-foxglove)
- 🔀 [Robot modes (SD / HO / URS)](EXAMPLES.md#1-robot-modes)
- 🦾 [Moving the head and arms](EXAMPLES.md#2-moving-the-head-and-arms)
- 📷 [Cameras and sensors](EXAMPLES.md#3-cameras-and-sensors)
- 🎙️ [Audio](EXAMPLES.md#4-audio)

---

## 🚀 Quick start

```bash
# 1. Connect to the MiviaLab Wi-Fi, then:
ssh -p 2222 studente@10.0.10.201          # password: mivia

# 2. In every new terminal, load the SDK
source ~/aimdk/install/local_setup.bash

# 3. Check that it works
ros2 topic list
ros2 run py_examples play_tts             # the robot speaks
```

> [!WARNING]
> 👥 The home folder `/home/studente` is **shared by all students**. Create your own folder
> (`mkdir ~/<folder_name>`) and do not touch other people's work or the original SDK in `~/aimdk`.

---

## 🔗 Resources

- AimDK SDK documentation: <https://x2-aimdk.agibot.com> (pick your robot's version), also available offline in the container at `~/aimdk/docs`.
- Foxglove: <https://app.foxglove.dev>
