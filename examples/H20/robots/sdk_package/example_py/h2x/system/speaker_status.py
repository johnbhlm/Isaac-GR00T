import humanoid_sdk_py
import humanoid_sdk_py.h2x as h2x
import time


def main():
    print("=== 扬声器状态设置与获取示例 ===")
    system = h2x.H2xSystem()

    print("正在设置扬声器状态...")
    status = humanoid_sdk_py.SpeakerStatus()
    status.enable = False
    status.volume = 50
    if system.setSpeaker(status) == 0:
        print("扬声器状态设置成功")
    else:
        print("扬声器状态设置失败")

    time.sleep(3)

    print("正在获取扬声器状态...")
    ret, status = system.getSpeaker()
    if ret == 0:
        print(f"扬声器使能状态: {'启用' if status.enable else '禁用'}")
        print(f"扬声器音量: {status.volume}")
        print("扬声器状态获取成功")
    else:
        print("扬声器状态获取失败")


if __name__ == "__main__":
    main()
