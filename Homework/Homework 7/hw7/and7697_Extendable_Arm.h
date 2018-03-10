#ifndef AND7697_EXTENDABLE_ARM_INCLUDED
#define AND7697_EXTENDABLE_ARM_INCLUDED

#include "and7697_Arm_Robot.h"

using namespace std;

class Extendable_Arm : public Arm_Robot
{
public:
    Extendable_Arm(int mn, string n, int bl, int l, int wl, int el) : Arm_Robot(mn, n, bl, l, wl), Robot(mn, n, bl), extend_length {el}, is_extended {false} {};
    bool move(int x, int y);
    bool extend();
    bool retract();
protected:
    int extend_length;
    bool is_extended;
    bool extend();
    bool retract();
};

#endif // AND7697_EXTENDABLE_ARM_INCLUDED
