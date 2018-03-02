#ifndef AND7697_ARM_ROBOT_INCLUDED
#define AND7697_ARM_ROBOT_INCLUDED

class Arm_Robot
{
public:
    Arm_Robot(int mn, string n, int bl, int l, int wl);
    bool move(int x, int y);
    bool pick_up(int weight);
    bool drop();
protected:
    int length;
    int weight_limit;
    bool is_holding;
};

#endif // AND7697_ARM_ROBOT_INCLUDED
