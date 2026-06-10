from __future__ import annotations

import dataclasses


@dataclasses.dataclass
class DeployArgs:
    """CLI / runtime configuration for H20 keyboard deployment."""

    host: str = "10.8.26.6"
    port: int = 5555
    resize_size: tuple[int, int] = (224, 224)
    # pretrained_path: str = "./results/Checkpoints/h20_gr00t_desk_hand_toy_0514"
    # stats_path: str = "./results/Checkpoints/h20_gr00t_desk_hand_toy_0514/dataset_statistics.json"
    enable_inactive_arm_freeze: bool = False
    run_mode: str = "async" # sync  async
    drop_steps: int = 8
    enable_action_drop: bool = True  
    prefetch_lead_steps: int = 8
    async_wait_timeout: float = 0.2
    enable_async_fallback: bool = False
    async_queue_size: int = 2
    control_dt: float = 0.01
    enable_done_flag: bool = False
    debug_timing: bool = False
    control_sleep: float = 0.007 # async：0.007   sync：0.0
