# controller.py 重构记录

## 重构目标

将 `move_arm_pose(label)` 单一大方法拆分为独立方法，并提取公共插值逻辑，消除代码重复和嵌套调用。

## 变更概览

### 1. 提取公共插值方法 `_interpolate_to`

**重构前：** 每个 move 分支都包含一段几乎相同的插值循环（~15 行）：读取当前关节 → 计算差值 → 循环插值 → 发送指令。四处出现，共约 60 行重复代码。

**重构后：** 提取为统一的 `_interpolate_to` 方法：

```python
def _interpolate_to(
    self,
    target: np.ndarray,      # 目标关节角度
    steps: int = 100,         # 插值步数
    start_index: int = 15,    # 起始电机索引
    end_index: int = MOTOR_COUNT,  # 结束电机索引
    kp: float = 80.0,
    kd: float = 10.0,
    lock_waist: bool = False, # 是否锁定腰部
) -> None
```

调用示例：
```python
# 全臂移到 init 位置，锁腰
self._interpolate_to(self.init_angles, lock_waist=True)

# 仅左臂移到 init 位置
self._interpolate_to(self.init_angles, start_index=15, end_index=22)

# 仅右臂移到 init 位置
self._interpolate_to(self.init_angles, start_index=22, end_index=29)
```

### 2. 提取 `_read_low_state`

将重复的低层状态读取封装：

```python
def _read_low_state(self) -> int:
    ret, self.low_state = self.low_level.readLowState()
    return ret
```

### 3. 拆分 `move_arm_pose(label)` 为四个独立方法

| 原调用 | 新方法 | 用途 |
|---|---|---|
| `move_arm_pose("init")` | `move_arm_to_init()` | 全身初始化姿态，完成后自动启动 infer |
| `move_arm_pose("left")` | `move_left_arm_to_init()` | 仅左臂回初始位 |
| `move_arm_pose("right")` | `move_right_arm_to_init()` | 仅右臂回初始位 |
| `move_arm_pose("walk")` | `move_arm_to_walk()` | 行走准备姿态 |

### 4. 修正拼写错误

`trainsition_flag` → `transition_flag`（涉及 controller.py 和 keyboard_handlers.py）

## 影响的文件

| 文件 | 变更 |
|---|---|
| `examples/H20/deploy/controller.py` | 拆分方法、提取 `_interpolate_to`、修正拼写 |
| `examples/H20/deploy/utils/keyboard_handlers.py` | 更新调用方式、移除多余 `partial`、修正拼写 |
| `examples/H20/README.md` | 同步更新方法名引用 |

## 代码行数对比

| 项目 | 重构前 | 重构后 |
|---|---|---|
| 插值循环实现 | 4 处 × ~15 行 = ~60 行 | 1 处 × 15 行 |
| move 方法总行数 | ~170 行 | ~75 行 |
| `move_left_arm_to_init` | 20 行 | 5 行 |
| `move_right_arm_to_init` | 20 行 | 5 行 |

## 行为不变性

- 所有电机控制参数（kp、kd、步数、时间间隔）保持不变
- transition → target 的两阶段插值逻辑保持不变
- `infer` 中对 `move_left/right_arm_to_init` 的调用时机不变
- 键盘事件到线程启动的映射不变

# Flag 重构计划

## 合并/重命名规则

| 原始 flag | 新 flag | 类型 | 说明 |
|-----------|---------|------|------|
| `_deploy_flag` + `_deploy_started` | `_inferring` | bool | 推理循环是否在运行 |
| `_init_flag` + `_init_finish` | `_init_state` | str\|None | None=空闲, "running"=进行中, "done"=完成 |
| `_walk_arm_flag` + `_walk_arm_finish` | `_walk_arm_state` | str\|None | 同上 |
| `transition_flag` | `_in_transition` | bool | 是否正在过渡姿态 |
| `task_finished` | `_task_completed` | bool | 推理循环内确认任务结束（用于阻塞等待） |
| `task_done_flag` | `_task_done_requested` | bool | 外部请求标记任务完成 |

## 涉及文件

1. `examples/H20/deploy/controller.py` — 主要修改
2. `examples/H20/deploy/utils/keyboard_handlers.py` — 引用 flag 的地方
3. `examples/H20/deploy/ai_agent/grasp_flow_node.py` — 引用 `task_done_flag`

## 修改细节

### controller.py `__init__`
- 删除: `_deploy_flag`, `_deploy_started`, `_init_flag`, `_init_finish`, `_walk_arm_flag`, `_walk_arm_finish`, `transition_flag`, `task_finished`, `task_done_flag`
- 新增: `_inferring`, `_init_state`, `_walk_arm_state`, `_in_transition`, `_task_completed`, `_task_done_requested`

### controller.py 各方法
- `start_exclusive_thread`: `_deploy_flag=False` → `_inferring=False`; `_walk_arm_flag=False` → `_walk_arm_state=None`; `_init_flag=False` → `_init_state=None`
- `move_arm_to_init`: 用 `_init_state` 替代 `_init_flag`/`_init_finish`; 用 `_in_transition` 替代 `transition_flag`
- `move_arm_to_walk`: 同理
- `infer`: `_deploy_started=True` + `_deploy_flag=True` → `_inferring=True`; 循环条件用 `_inferring`
- `agent_pick/place_command_exec`: `task_finished` → `_task_completed`; `_deploy_flag` → `_inferring`; `_init_flag` → `_init_state`
- `agent_reset_command_exec`: 同理

### keyboard_handlers.py
- 所有 `_deploy_flag` → `_inferring`
- 所有 `_deploy_started` → `_inferring`（重置时设 False）
- `_init_flag` → `_init_state`
- `_walk_arm_flag` → `_walk_arm_state`
- `_walk_arm_finish` → `_walk_arm_state == "done"`
- `transition_flag` → `_in_transition`
- `task_done_flag` → `_task_done_requested`

### grasp_flow_node.py
- `task_done_flag` → `_task_done_requested`

## 当前入口定位

`examples/H20/deploy/deploy/controller.py` 当前为 **keyboard-only 调试入口**，正式 AI agent/reset 流程仍在 `controller_sync.py` 与 `controller_async.py` 中。
