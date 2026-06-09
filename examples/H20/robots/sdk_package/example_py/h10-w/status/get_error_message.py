import humanoid_sdk_py
from humanoid_sdk_py import h10w


h10w_status = h10w.H10wStatus()
print("=== 获取机器人当前运动状态信息 ===")

ret, error_msg = h10w_status.getErrorMessage()
if ret != 0 or error_msg is None:
    print("获取错误信息失败，任务终止")
    exit(-1)

print("错误代码：", error_msg.error_code)
print("错误ID：", error_msg.id)
print("错误等级：", error_msg.level)
print("模块ID：", error_msg.module)
print("错误信息：", error_msg.msg)
