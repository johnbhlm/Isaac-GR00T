# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

from __future__ import annotations

from dataclasses import dataclass
import select
import sys
import termios
import time
import tty
from typing import Callable


@dataclass
class KeyboardCommand:
    """Single keyboard event consumed by the deployment controller."""

    key: str
    timestamp: float


class KeyboardReader:
    """Non-blocking single-key reader for Thor console operation."""

    def __init__(self):
        self._fd = sys.stdin.fileno()
        self._old_settings: list | None = None
        self.enabled = sys.stdin.isatty()

    def __enter__(self) -> "KeyboardReader":
        if self.enabled:
            self._old_settings = termios.tcgetattr(self._fd)
            tty.setcbreak(self._fd)
        return self

    def __exit__(self, exc_type, exc, tb) -> None:
        if self.enabled and self._old_settings is not None:
            termios.tcsetattr(self._fd, termios.TCSADRAIN, self._old_settings)

    def poll(self) -> KeyboardCommand | None:
        if not self.enabled:
            return None
        readable, _, _ = select.select([sys.stdin], [], [], 0.0)
        if not readable:
            return None
        return KeyboardCommand(sys.stdin.read(1), time.time())


class Rate:
    """Simple wall-clock loop-rate helper."""

    def __init__(self, hz: float):
        if hz <= 0:
            raise ValueError(f"hz must be > 0, got {hz}")
        self.period = 1.0 / hz

    def sleep(self, started_at: float) -> None:
        remaining = self.period - (time.time() - started_at)
        if remaining > 0:
            time.sleep(remaining)


class ClosedLoopRunner:
    """Runs a pollable callback until it returns False or a stop key is received."""

    def __init__(self, control_hz: float):
        self.rate = Rate(control_hz)

    def run(self, tick: Callable[[KeyboardCommand | None], bool]) -> None:
        with KeyboardReader() as keyboard:
            while True:
                started_at = time.time()
                if not tick(keyboard.poll()):
                    return
                self.rate.sleep(started_at)
