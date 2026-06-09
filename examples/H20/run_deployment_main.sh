#!/usr/bin/env bash
# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

set -euo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"
REPO_ROOT="$(cd -- "${SCRIPT_DIR}/../.." >/dev/null 2>&1 && pwd)"

POLICY_HOST="${1:-10.8.26.6}"
POLICY_PORT="${2:-5555}"
ROBOT_ADAPTER="${3:-dummy}"
ROBOT_CONFIG="${4:-}"

export PYTHONPATH="${REPO_ROOT}:${PYTHONPATH:-}"
cd "${REPO_ROOT}"

CMD=(
  python -m examples.H20.deploy.main
  --host "${POLICY_HOST}"
  --port "${POLICY_PORT}"
  --robot-adapter "${ROBOT_ADAPTER}"
)

if [[ -n "${ROBOT_CONFIG}" ]]; then
  CMD+=(--robot-config "${ROBOT_CONFIG}")
fi

exec "${CMD[@]}"
