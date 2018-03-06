#ifndef AND7697_MOBILE_ROBOT_INCLUDED
#define AND7697_MOBILE_ROBOT_INCLUDED

#include "and7697_Robot.h"

class Mobile_Robot : public Robot
{
public:
    Mobile_Robot(int mn, string n, int bl) : Robot(mn, n, bl) {};
    bool move(int x, int y);
    bool move(int x, int y, int speed);
    void set_speed_level(int speed);
private:
    int speed_level;
};

#endif // AND7697_MOBILE_ROBOT_INCLUDED
