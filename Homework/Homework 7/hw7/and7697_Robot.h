#ifndef AND7697_ROBOT_INCLUDED
#define AND7697_ROBOT_INCLUDED

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

double calculate_distance(int x, int y);

class Robot
{
public:
    Robot(int mn, string n, int bl) : model_number {mn}, name {n}, battery_life {bl}, battery_level {bl}, position {make_pair(0,0)}, type{"Robot"} {};
    virtual bool move(int x, int y);
    void charge();
    double get_battery_percentage();
    void set_type(string type);
    string get_type();
protected:
    int model_number;
    string name;
    int battery_life;
    int battery_level;
    pair<int, int> position;
    string type;
};

#endif // AND7697_ROBOT_INCLUDED
