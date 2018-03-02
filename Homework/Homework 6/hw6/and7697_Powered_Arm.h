#ifndef AND7697_POWERED_ARM_INCLUDED
#define AND7697_POWERED_ARM_INCLUDED

class Powered_Arm
{
public:
    Powered_Arm(int mn, string n, int bl, int l, int wl, int ml);
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
