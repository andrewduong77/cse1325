#ifndef AND7697_MOBILE_ARM_H_INCLUDED
#define AND7697_MOBILE_ARM_H_INCLUDED

#include "and7697_Super_Arm.h"
#include "and7697_Mobile_Robot.h"

class Mobile_Arm : public Super_Arm, public Mobile_Robot
{
public:
    Mobile_Arm(int mn, string n, int bl, int l, int wl, int el, int ml) : Super_Arm(mn, n, bl, l, wl, el, ml), Mobile_Robot(mn, n, bl), Robot(mn, n, bl) {};
    bool move(int x, int y);
    bool move(int x, int y, int speed);
    bool move_arm(int x, int y);
    bool move(int base_x, int base_y, int arm_x, int arm_y);
    bool move(int base_x, int base_y, int arm_x, int arm_y, int speed);
private:
    pair<int, int> arm_position;
};

#endif // AND7697_MOBILE_ARM_H_INCLUDED
