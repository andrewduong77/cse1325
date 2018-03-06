#ifndef AND7697_ROBOT_INCLUDED
#define AND7697_ROBOT_INCLUDED

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Robot
{
public:
    Robot(int mn, string n, int bl) : model_number {mn}, name {n}, battery_life {bl}, battery_level {bl}, position {make_pair(0,0)} {};
    bool move(int x, int y);
    void charge();
    double get_battery_percentage();
    double calculate_distance(int x, int y);
protected:
    int model_number;
    string name;
    int battery_life;
    int battery_level;
    pair<int, int> position;
};

#endif // AND7697_ROBOT_INCLUDED
