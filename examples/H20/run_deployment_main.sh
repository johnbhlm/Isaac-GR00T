#!/bin/bash

# set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"

# default_ckpt="${REPO_ROOT}/results/Checkpoints/h20_gr00t_both120"
default_ckpt="${REPO_ROOT}/results/Checkpoints/h20_gr00t_desk_hand_toy_0514"
default_stats="${default_ckpt}/dataset_statistics.json"
default_model_host="10.8.26.40"
default_model_port=10093

your_ckpt="${1:-$default_ckpt}"
your_stats="${2:-${your_ckpt}/dataset_statistics.json}"
your_model_host="${3:-$default_model_host}"
your_model_port="${4:-$default_model_port}"
gpu_id="${5:-0}"

cd "${REPO_ROOT}/examples/H20/robots/sdk_package/"
export LD_LIBRARY_PATH="$(pwd)/lib/linux/x86_64/x64:$(pwd)/dependency/sdk/Runtime_Env/linux/x86_64/x64:$(pwd)/dependency/fastdds/linux/x86_64/x64:$LD_LIBRARY_PATH"
export PYTHONPATH="$(pwd)/lib/linux/x86_64/x64:$PYTHONPATH"

cd "${REPO_ROOT}"
source examples/H20/robots/gripper/h2x/install/setup.bash

export PYTHONPATH="${PYTHONPATH}:${REPO_ROOT}"
export CUDA_VISIBLE_DEVICES="${gpu_id}"
echo -e "\033[33mgpu id (to use): ${gpu_id}\033[0m"

PYTHONWARNINGS=ignore::UserWarning \
python -m examples.H20.deploy.main \
  --pretrained-path "${your_ckpt}" \
  --stats-path "${your_stats}" \
  --host "${your_model_host}" \
  --port "${your_model_port}"
