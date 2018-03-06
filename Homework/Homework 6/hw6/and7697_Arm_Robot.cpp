#include "and7697_Arm_Robot.h"

bool Arm_Robot::move(int x, int y)
{
    double z = calculate_distance(x, y); // z is distance between x and y
    if(z > battery_level || z > length)
        return false;
    else
    {
        position->first += x;
        position->second += y;
        battery_level -= is_holding ? 2*z : z;
    }
}

bool Arm_Robot::pick_up(int weight)
{

}

bool Arm_Robot::drop()
{

}

double Robot::calculate_distance(int x, int y)
{
    x = abs(x);
    y = abs(y);
    return sqrt(x*x + y*y);
}
