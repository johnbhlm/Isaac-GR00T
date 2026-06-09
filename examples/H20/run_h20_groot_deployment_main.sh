#!/bin/bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"

MODEL_HOST="${1:-10.8.26.6}"
MODEL_PORT="${2:-5555}"
ACTION_HORIZON="${3:-1}"

cd "${REPO_ROOT}/examples/H20/robots/sdk_package/"

# Thor / Jetson: arm/aarch64. Do not use x86_64 path on Thor.
export LD_LIBRARY_PATH="$(pwd)/lib/linux/arm/aarch64:$(pwd)/dependency/sdk/Runtime_Env/linux/arm/aarch64:$(pwd)/dependency/fastdds/linux/arm/aarch64:${LD_LIBRARY_PATH}"
export PYTHONPATH="$(pwd)/lib/linux/arm/aarch64:${PYTHONPATH}"

cd "${REPO_ROOT}"

if command -v conda >/dev/null 2>&1; then
  source "$(conda info --base)/etc/profile.d/conda.sh"
  conda activate groot_client
fi

source examples/H20/robots/gripper/h2x/install/setup.bash

export PYTHONPATH="${PYTHONPATH}:${REPO_ROOT}"

python -m examples.H20.deploy.main \
  --host "${MODEL_HOST}" \
  --port "${MODEL_PORT}" \
  --action-horizon "${ACTION_HORIZON}" \
  --bgr-to-rgb \
  --policy-timeout-ms 30000
