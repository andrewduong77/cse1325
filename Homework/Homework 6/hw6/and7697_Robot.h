#ifndef AND7697_ROBOT_INCLUDED
#define AND7697_ROBOT_INCLUDED

class Robot
{
public:
    Robot(int mn, string n, int bl)
    bool move(int x, int y);
    void charge();
    double get_battery_percentage();
protected:
    int model_number;
    string name;
    int battery_life;
    int battery_level;
    pair<int, int> position;
};

#endif // AND7697_ROBOT_INCLUDED
