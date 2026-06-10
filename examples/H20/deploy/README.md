# H20 closed-loop GR00T deployment client

This package is the lightweight Thor-side client for controlling an H20 robot with a remote
GR00T `PolicyServer`. The GPU workstation loads the model; Thor only captures observations,
calls `PolicyClient`, and forwards the returned action chunk to the robot interface.

## GPU server

```bash
python gr00t/eval/run_gr00t_server.py \
  --model-path /home/maintenance/Code/models/results/Checkpoints/bao.he/h20/groot_h20_0529 \
  --embodiment-tag NEW_EMBODIMENT \
  --device cuda:0 \
  --host 0.0.0.0 \
  --port 5555 \
  --no-strict
```

## Thor client

Real hardware is selected by passing an importable adapter module:

```bash
bash examples/H20/run_h20_groot_deployment_main.sh 10.8.26.6 5555
```

The adapter module must define `create_h20_robot_interface(config: dict)` and return an object that
implements the methods documented in `examples/H20/robots/model2h20_interface.py`.

## Keyboard commands

- `1`-`8`: switch the language task.
- `p`: move both arms to the configured walk-safe pose.
- `i`: move both arms to the configured manipulation init pose, then enable closed-loop inference.
- `f`: mark the current task complete and pause inference.
- `w`: switch to walk mode and pause inference.
- `q`: request a single walk step through the robot adapter.
- `h`: switch back to homie/manipulation mode.
- `r`: reset the remote policy state.
- `e`: emergency stop.
- `space` or `s`: stop the client.
