from __future__ import annotations

import json

import numpy as np


class Normalizer:
    def __init__(self, mode: str, statistics: dict):
        assert mode in ["mean_std", "min_max", "q99"]
        self.mode = mode
        self.mean = np.asarray(statistics["mean"], dtype=np.float32)
        self.std = np.asarray(statistics["std"], dtype=np.float32)
        self.min = np.asarray(statistics["min"], dtype=np.float32)
        self.max = np.asarray(statistics["max"], dtype=np.float32)
        self.q01 = np.asarray(statistics.get("q01", []), dtype=np.float32)
        self.q99 = np.asarray(statistics.get("q99", []), dtype=np.float32)

    def forward(self, x: np.ndarray) -> np.ndarray:
        x = np.asarray(x, dtype=np.float32)
        if self.mode == "mean_std":
            return (x - self.mean) / (self.std + 1e-8)
        if self.mode == "min_max":
            return (x - self.min) / (self.max - self.min + 1e-8) * 2 - 1
        if self.mode == "q99":
            clipped = np.clip(x, self.q01, self.q99)
            return clipped / (self.q99 + 1e-8)
        raise ValueError(f"Unknown mode {self.mode}")

def load_stats(path: str) -> dict:
    with open(path, "r") as f:
        stats = json.load(f)
    return stats["h20"]["state"]
