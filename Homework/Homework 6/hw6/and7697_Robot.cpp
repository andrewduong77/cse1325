#include "and7697_Robot.h"

bool Robot::move(int x, int y)
{
    double z = calculate_distance(x, y); // z is distance between x and y
    if(z > battery_level)
        return false;
    else
    {
        position->first += x;
        position->second += y;
        battery_level -= z;
    }
}

void Robot::charge()
{
    battery_level = battery_life;
}

double Robot::get_battery_percentage()
{
    return battery_level / battery_life * 100 + "%\n"
}

double Robot::calculate_distance(int x, int y)
{
    x = abs(x);
    y = abs(y);
    return sqrt(x*x + y*y);
}
