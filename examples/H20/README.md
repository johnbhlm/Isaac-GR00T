# H20 键盘部署说明（Keyboard + VLA 推理）

面向 **H20 人形机器人** 的示例部署：**人在回路**、分阶段键盘控制、通过 **WebSocket 策略服务** 做 VLA 推理，并结合 **RealSense** 与 **H2X SDK** 下发实时指令。

---

## 1. 推荐入口与前置条件

### 1.1 你需要提前准备

| 组件 | 说明 |
|------|------|
| **机器人 + 相机** | 本体上电，RealSense 可用，网络正常。 |
| **ROS2 夹爪环境** | 需能 `source` 到 `robots/gripper/h2x/install/setup.bash`（由启动脚本自动 source）。 |
| **策略服务（policy server）** | **不会**由部署启动脚本拉起；需在 **GPU 机器** 上单独运行（例如 `deployment/model_server/server_policy.py` 或你们的等价服务），并保证机器人侧能访问其 **IP 与端口**。 |
| **Python 依赖** | `rclpy`、`humanoid_sdk_py`、与 starVLA / `ModelClient` 一致的推理栈；`PYTHONPATH` 需包含本仓库根目录（脚本已设置）。 |

### 1.2 主流程启动（推荐）

在仓库根目录执行：

```bash
cd /path/to/h10w-deploy
bash examples/H20/run_deployment_main.sh \
  [checkpoint_dir] \
  [dataset_statistics.json] \
  [policy_host] \
  [policy_port] \
  [gpu_id]
```

参数说明（均可省略，使用脚本内默认值）：

1. **checkpoint_dir**：模型 checkpoint 目录（默认：`$REPO_ROOT/results/Checkpoints/h20_gr00t_both120`）。
2. **stats_path**：`dataset_statistics.json`；省略时默认 `{checkpoint_dir}/dataset_statistics.json`。
3. **policy_host**：策略服务所在机器 IP（默认示例 `10.8.26.85`）。
4. **policy_port**：策略服务端口（默认 `10093`）。
5. **gpu_id**：本机 `CUDA_VISIBLE_DEVICES`（默认 `0`）。

脚本会：

- `cd` 到 `examples/H20/robots/sdk_package/` 配置 **LD_LIBRARY_PATH** / SDK 相关 **PYTHONPATH**；
- 回到仓库根目录，`source examples/H20/robots/gripper/h2x/install/setup.bash`；
- 执行：`python -m examples.H20.deploy.main --pretrained-path ... --stats-path ... --host ... --port ...`。


## 2. 标准操作顺序（与实现一致）

典型 demo：**桌面抓取 → 标记完成 → 切放置任务 → 行走 → 回操作模式 → 策略继续放置**。

```text
p  → 双臂收到「行走安全」姿态（walk arm）
i  → 过渡到初始抓取姿态，结束后自动启动 infer()（VLA 闭环）
f  → 标记当前抓取任务完成（夹爪锁定等逻辑在 infer 内处理）
4  → 切到任务 4（示例中为 place 类任务；1~8 见代码内 task_list）
w  → 进入 WalkRun（会停掉当前推理线程）
q  → 仅在 walk 模式下执行一段固定 Move 序列（示例位移）
h  → 切回 homie：ClimbStairsMode（说明里常称 HalfWalk）；在条件满足时会再次触发 init→infer，便于继续操作臂做放置
```

**空格**：停止主循环（`stop_program`）。

说明：

- **策略不会“无模型自动放置”**：放置依赖 **infer** 里模型对当前语言任务与图像的输出；`h` 后是否再次进入 infer 取决于内部标志位（例如 `_deploy_flag`、`_walk_arm_finish`），与 README 旧版“自动放置”表述一致的是 **“在满足条件时再次拉起 init→infer”**，而非脱离策略的硬编码轨迹。

---

## 3. 代码与目录结构（当前）

```text
examples/H20/
├── run_deployment_main.sh          # 推荐：配置 SDK + ROS + python -m examples.H20.deploy.main
├── eval_h20.sh                     # 备用：旧式路径/环境，可按需改
├── deploy_policy_h20_keyboard_interpolation.py   # 备用：单文件 legacy（与模块化逻辑并行维护）
├── deploy/
│   ├── main.py                     # CLI：parse 参数 → 构造 H20VLA → run()
│   ├── controller.py               # H20VLA：SDK、相机、infer、move_arm_pose、键盘监听
│   ├── configs.py                  # DeployArgs 等配置占位
│   └── utils/
│       ├── keyboard_handlers.py    # 键盘 on_press / make_on_press
│       ├── normalizer.py           # 状态归一化 + load_stats
│       └── task_utils.py           # get_task_info / mark_task_done / should_apply_gripper_lock
└── robots/
    ├── sdk_package/                # H20 Python/C++ SDK、lib、dependency（启动脚本 cd 于此）
    ├── gripper/                    # h2x ROS2 安装与 gripper_control 封装
    ├── camera/
    │   ├── realsense.py            # RealSense Camera 封装
    │   └── freeze_frames/          # 可选参考帧等静态资源
    ├── model2h20_interface.py      # ModelClient（WebSocket 调策略）
    └── run_policy_server.sh        # 在 GPU 侧启动策略服务的示例命令（需自行在对应环境执行）
```

模块化路径下，**推理与运动主逻辑**在 `deploy/controller.py`（类名仍为 `H20VLA`）；键盘逻辑在 `deploy/utils/keyboard_handlers.py`，任务与夹爪锁定辅助在 `deploy/utils/task_utils.py`。

---

## 4. 核心行为摘要

### 4.1 运动与线程

- **`move_arm_pose("walk")`**：对应原「行走准备姿态」；模式线程名为 `walk_arm`。
- **`move_arm_pose("init")`**：对应原「初始抓取姿态」；完成后 **仅此路径** 会 `start_exclusive_thread(infer, "infer")`。
- **`move_arm_pose("left")` / `("right")`**：单侧回初始插值，**不会**自动启动 infer（供任务完成分支调用）。
- **`start_exclusive_thread(target, mode_name)`**：保证 init / walk_arm / infer 互斥，切换时停掉上一模式的标志位。

### 4.2 infer 循环（概念）

1. 读三路图像 + 低层状态 + 夹爪状态；  
2. 归一化 state，组 `example`（含 `lang`）；  
3. `ModelClient.step` → `raw_actions`；  
4. 按固定动作窗口与插值步数执行臂与夹爪；结合 `freeze_left` / `freeze_right`、任务完成与夹爪锁定逻辑。

### 4.3 任务键 1~8

在 `controller.py`（或 legacy 单文件）内 `task_list` 字典定义；`task_utils.get_task_info` 将 id 映射为 `hand` + `action`（pick/place），供 `mark_task_done` / `should_apply_gripper_lock` 使用。

---

## 5. 与 H10W 示例的对照

| H10W | H20 |
|------|-----|
| `examples/H10W/run_deployment_main.sh` + `python -m H10W.deploy.main` | `examples/H20/run_deployment_main.sh` + `python -m examples.H20.deploy.main` |
| `H10W/deploy/*` 分包 | `examples/H20/deploy/*` + `examples/H20/robots/*` |

---

## 6. 常见问题

- **连不上策略**：检查 `run_deployment_main.sh` 传入的 host/port、防火墙、以及 GPU 侧服务是否监听 `0.0.0.0` 或正确网卡。  
- **import 失败**：必须在仓库根执行或保证 `PYTHONPATH` 含仓库根，以便 `examples.H20.*` 可解析。  
- **RealSense 标定路径**：`realsense.py` 内部分 `np.loadtxt` 为相对路径，工作目录需与标定文件布局一致，或后续改为基于 `__file__` 的路径。

---

## 7. 小结

当前推荐形态是：**`run_deployment_main.sh` → `deploy/main.py` → `controller.H20VLA`**，机器人侧 SDK 与夹爪在 **`robots/`** 下统一管理；**策略服务在另一台机器单独启动**，通过参数注入 IP/端口即可对齐 README 中的分阶段键盘流程。
