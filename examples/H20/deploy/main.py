# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

from __future__ import annotations

import argparse

from examples.H20.deploy.configs import H20DeployConfig
from examples.H20.deploy.controller import H20DeploymentClient


def _csv_floats(value: str) -> tuple[float, ...]:
    values = tuple(float(item) for item in value.split(",") if item.strip())
    if len(values) != 7:
        raise argparse.ArgumentTypeError(f"expected 7 comma-separated floats, got {len(values)}")
    return values


def parse_args() -> H20DeployConfig:
    parser = argparse.ArgumentParser(
        description="H20 closed-loop real-robot deployment client for remote GR00T PolicyServer."
    )
    parser.add_argument("--host", "--policy-host", dest="policy_host", default="10.8.26.6")
    parser.add_argument("--port", "--policy-port", dest="policy_port", type=int, default=5555)
    parser.add_argument("--timeout-ms", dest="policy_timeout_ms", type=int, default=30000)
    parser.add_argument("--api-token", dest="policy_api_token", default=None)
    parser.add_argument("--control-hz", type=float, default=30.0)
    parser.add_argument("--action-horizon", type=int, default=8)
    parser.add_argument("--interpolation-steps", type=int, default=1)
    parser.add_argument("--max-joint-step", type=float, default=None)
    parser.add_argument("--gripper-threshold", type=float, default=None)
    parser.add_argument(
        "--robot-adapter",
        default="dummy",
        help="'dummy' for smoke tests, or an importable module exposing create_h20_robot_interface.",
    )
    parser.add_argument(
        "--robot-config", default=None, help="Optional JSON config for --robot-adapter."
    )
    parser.add_argument("--dry-run", action="store_true", help="Do not send robot commands.")
    parser.add_argument("--start-task", default="8", choices=[str(i) for i in range(1, 9)])
    parser.add_argument("--language-key", default="annotation.human.action.task_description")
    parser.add_argument("--left-init-joints", type=_csv_floats, default=(0.0,) * 7)
    parser.add_argument("--right-init-joints", type=_csv_floats, default=(0.0,) * 7)
    parser.add_argument("--left-walk-joints", type=_csv_floats, default=(0.0,) * 7)
    parser.add_argument("--right-walk-joints", type=_csv_floats, default=(0.0,) * 7)
    parser.add_argument("--gripper-open", type=float, default=1.0)
    parser.add_argument("--gripper-closed", type=float, default=0.0)
    args = parser.parse_args()
    return H20DeployConfig(**vars(args))


def main() -> None:
    cfg = parse_args()
    H20DeploymentClient(cfg).run()


if __name__ == "__main__":
    main()
