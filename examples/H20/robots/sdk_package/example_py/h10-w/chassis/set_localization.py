import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w

print("=== set localization ===")
h10w_chassis = h10w.H10wChassis()
# pos_x, pos_y, is_valid
ret = h10w_chassis.setLocalization(0.0, 0.0, True)
if ret != 0:
    print("set localization failed.")
    exit(-1)

print("set localization success.")
