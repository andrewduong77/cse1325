#include "and7697_Mobile_Arm.h"

bool Mobile_Arm::move(int x, int y)
{
    return Mobile_Robot::move(x, y);
}

bool Mobile_Arm::move(int x, int y, int speed)
{
    return Mobile_Robot::move(x, y, speed);
}

bool Mobile_Arm::move_arm(int x, int y)
{
    return Super_Arm::move(x, y);
}

bool Mobile_Arm::move(int base_x, int base_y, int arm_x, int arm_y)
{
    bool base, arm;
    base = Mobile_Robot::move(base_x, base_y);
    arm = Super_Arm::move(arm_x, arm_y);
    return base && arm;
}

bool Mobile_Arm::move(int base_x, int base_y, int arm_x, int arm_y, int speed)
{
    bool base, arm;
    base = Mobile_Robot::move(base_x, base_y);
    arm = Super_Arm::move(arm_x, arm_y);
    return base && arm;
}
