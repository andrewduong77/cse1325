#include "and7697_Robot.h"

double calculate_distance(int x, int y)
{
    return sqrt(x*x + y*y);
}

bool Robot::move(int x, int y)
{
    int d_x = abs(x - position.first);
    int d_y = abs(y - position.second);
    double d = calculate_distance(d_x, d_y); // d is distance between x and y
    double required_level = d; // required 1 unit of battery charge for moving a distance of 1
    if(required_level > battery_level)
    {
        cout << "Battery level is not sufficient enough." << endl;
        return false;
    }
    else
    {
        position.first = x;
        position.second = y;
        battery_level -= required_level;
        return true;
    }
}

void Robot::charge()
{
    cout << name << "'s battery charged to max." << endl;
    battery_level = battery_life;
}

double Robot::get_battery_percentage()
{
    return (double) battery_level / (double) battery_life * 100;
}

string Robot::set_type(string type)
{
    this->type = type;
}

string Robot::get_type()
{
    return type;
}
