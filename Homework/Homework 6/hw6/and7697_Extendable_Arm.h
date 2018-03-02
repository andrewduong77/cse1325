#ifndef AND7697_EXTENDABLE_ARM_INCLUDED
#define AND7697_EXTENDABLE_ARM_INCLUDED

class Extendable_Arm
{
public:
    Extendable_Arm(int mn, string n, int bl, int l, int wl, int el)
    bool move(int x, int y);
    bool extend();
    bool retract();
private:
    int extend_length;
    bool is_extended;
};

#endif // AND7697_EXTENDABLE_ARM_INCLUDED
