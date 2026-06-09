"""CLI entry for H20 deployment."""

from __future__ import annotations

import argparse

from examples.H20.deploy.configs import DeployArgs as Args
from examples.H20.deploy.controller import H20VLA


def parse_cli_args() -> Args:
    parser = argparse.ArgumentParser(description="H20 deployment policy runner")
    parser.add_argument("--pretrained-path", default=Args.pretrained_path)
    parser.add_argument("--stats-path", default=None)
    parser.add_argument("--host", default=Args.host)
    parser.add_argument("--port", type=int, default=Args.port)
    parser.add_argument("--image-width", type=int, default=Args.resize_size[0])
    parser.add_argument("--image-height", type=int, default=Args.resize_size[1])
    parser.add_argument("--action-horizon", type=int, default=Args.action_horizon)
    parser.add_argument("--bgr-to-rgb", dest="bgr_to_rgb", action="store_true", default=Args.bgr_to_rgb)
    parser.add_argument("--no-bgr-to-rgb", dest="bgr_to_rgb", action="store_false")
    parser.add_argument("--policy-timeout-ms", type=int, default=Args.policy_timeout_ms)
    parser.add_argument("--debug", action="store_true", default=Args.debug)
    parser.add_argument("--run-mode", default=Args.run_mode, choices=["sync", "async"])
    parser.add_argument("--drop-steps", type=int, default=Args.drop_steps)
    parser.add_argument("--enable-action-drop", action="store_true", default=Args.enable_action_drop)
    parser.add_argument("--prefetch-lead-steps", type=int, default=Args.prefetch_lead_steps)
    parser.add_argument("--async-wait-timeout", type=float, default=Args.async_wait_timeout)
    parser.add_argument("--enable-async-fallback", action="store_true", default=Args.enable_async_fallback)
    parser.add_argument("--enable-done-flag", action="store_true", default=Args.enable_done_flag)
    parser.add_argument("--enable-inactive-arm-freeze", action="store_true", default=Args.enable_inactive_arm_freeze)
    parser.add_argument("--control-sleep", type=float, default=Args.control_sleep)

    parsed = parser.parse_args()
    stats_path = parsed.stats_path or f"{parsed.pretrained_path}/dataset_statistics.json"
    return Args(
        host=parsed.host,
        port=parsed.port,
        resize_size=(parsed.image_width, parsed.image_height),
        pretrained_path=parsed.pretrained_path,
        stats_path=stats_path,
        action_horizon=parsed.action_horizon,
        bgr_to_rgb=parsed.bgr_to_rgb,
        policy_timeout_ms=parsed.policy_timeout_ms,
        debug=parsed.debug,
        run_mode=parsed.run_mode,
        drop_steps=parsed.drop_steps,
        enable_action_drop=parsed.enable_action_drop,
        prefetch_lead_steps=parsed.prefetch_lead_steps,
        async_wait_timeout=parsed.async_wait_timeout,
        enable_async_fallback=parsed.enable_async_fallback,
        enable_done_flag=parsed.enable_done_flag,
        enable_inactive_arm_freeze=parsed.enable_inactive_arm_freeze,
        control_sleep=parsed.control_sleep,
    )


def main() -> None:
    args = parse_cli_args()
    H20VLA(args=args).run()


if __name__ == "__main__":
    main()
