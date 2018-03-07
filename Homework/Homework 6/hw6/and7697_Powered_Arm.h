#ifndef AND7697_POWERED_ARM_INCLUDED
#define AND7697_POWERED_ARM_INCLUDED

#include "and7697_Arm_Robot.h"

class Powered_Arm : public Arm_Robot
{
public:
    Powered_Arm(int mn, string n, int bl, int l, int wl, int ml) : Arm_Robot(mn, n, bl, l, wl), Robot(mn, n, bl), motor_limit {ml}, motor_on {false} {};
    bool move(int x, int y);
    bool pick_up(int weight);
    bool drop();
    void power_on();
    void power_off();
private:
    int motor_limit;
    bool motor_on;
};

#endif // AND7697_POWERED_ARM_INCLUDED
