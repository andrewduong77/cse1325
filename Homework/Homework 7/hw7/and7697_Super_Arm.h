#ifndef AND7697_SUPER_ARM_H_INCLUDED
#define AND7697_SUPER_ARM_H_INCLUDED

#include "and7697_Extendable_Arm.h"
#include "and7697_Powered_Arm.h"

class Super_Arm : public Extendable_Arm, public Powered_Arm
{
public:
    Super_Arm(int mn, string n, int bl, int l, int wl, int el, int ml);
    bool move(int x, int y);
};

#endif // AND7697_SUPER_ARM_H_INCLUDED
