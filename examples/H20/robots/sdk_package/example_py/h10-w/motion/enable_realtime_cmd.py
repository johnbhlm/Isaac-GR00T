import humanoid_sdk_py
from humanoid_sdk_py import h10w
import time

h10w_motion = h10w.H10wMotion()

print("=== 实时指令模式示例 ===")

print("正在进行上半身安全模式设置...")
ret = h10w_motion.enableRealtimeCmd(True)
if ret != 0:
    print("打开实时指令失败")
    exit(-1)
