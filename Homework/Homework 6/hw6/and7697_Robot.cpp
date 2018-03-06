#include "and7697_Robot.h"

bool Robot::move(int x, int y)
{
    int d_x = abs(x - position.first);
    int d_y = abs(y - position.second);
    double d = calculate_distance(d_x, d_y); // d is distance between x and y
    double required_level = d; // required 1 unit of battery charge for moving a distance of 1
    if(required_level > battery_level)
        return false;
    else
    {
        position.first = x;
        position.second = y;
        battery_level -= required_level;
        cout << "Robot now at position (" << position.first << "," << position.second << ")." << endl;
        return true;
    }
}

void Robot::charge()
{
    battery_level = battery_life;
}

double Robot::get_battery_percentage()
{
    return battery_level / battery_life;
}

double Robot::calculate_distance(int x, int y)
{
    return sqrt(x*x + y*y);
}
