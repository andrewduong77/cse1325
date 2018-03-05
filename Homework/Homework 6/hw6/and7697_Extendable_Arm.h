#ifndef AND7697_EXTENDABLE_ARM_INCLUDED
#define AND7697_EXTENDABLE_ARM_INCLUDED

#include "and7697_Robot.h"

#include <string>

using namespace std;

class Extendable_Arm : public Robot, public Arm_Robot
{
public:
    Extendable_Arm(int mn, string n, int bl, int l, int wl, int el) : Robot(mn, n, bl), Arm_Robot(mn, n, bl, l, wl);
    bool move(int x, int y);
    bool extend();
    bool retract();
private:
    int extend_length;
    bool is_extended;
};

#endif // AND7697_EXTENDABLE_ARM_INCLUDED
