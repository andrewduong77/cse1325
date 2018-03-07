#ifndef AND7697_ARM_ROBOT_INCLUDED
#define AND7697_ARM_ROBOT_INCLUDED

#include "and7697_Robot.h"

class Arm_Robot : public virtual Robot
{
public:
    Arm_Robot(int mn, string n, int bl, int l, int wl) : Robot(mn, n, bl), length {l}, weight_limit {wl}, is_holding {false} {};
    bool move(int x, int y);
    bool pick_up(int weight);
    bool drop();
//    double calculate_distance(int x, int y);
protected:
    int length;
    int weight_limit;
    bool is_holding;
};

#endif // AND7697_ARM_ROBOT_INCLUDED
