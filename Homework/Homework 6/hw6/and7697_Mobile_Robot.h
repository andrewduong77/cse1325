#ifndef AND7697_MOBILE_ROBOT_INCLUDED
#define AND7697_MOBILE_ROBOT_INCLUDED

class Mobile_Robot
{
public:
    Mobile_Robot(int mn, string n, int bl);
    bool move(int x, int y);
    bool move(int x, int y, int speed);
    void set_speed_level(int speed);
private:
    int speed_level;
};

#endif // AND7697_MOBILE_ROBOT_INCLUDED
