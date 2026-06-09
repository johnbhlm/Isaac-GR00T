import humanoid_sdk_py
import humanoid_sdk_py.h2x as h2x
import time


def main():
    print("=== 麦克风状态设置与获取示例 ===")
    system = h2x.H2xSystem()

    print("正在设置麦克风状态...")
    status = humanoid_sdk_py.MicrophoneStatus()
    status.enable = False
    status.volume = 50
    if system.setMicrophone(status) == 0:
        print("麦克风状态设置成功")
    else:
        print("麦克风状态设置失败")

    time.sleep(3)

    print("正在获取麦克风状态...")
    ret, status = system.getMicrophone()
    if ret == 0:
        print(f"麦克风使能状态: {'启用' if status.enable else '禁用'}")
        print(f"麦克风音量: {status.volume}")
        print("麦克风状态获取成功")
    else:
        print("麦克风状态获取失败")


if __name__ == "__main__":
    main()
