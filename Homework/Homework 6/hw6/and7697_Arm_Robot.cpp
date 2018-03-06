#include "and7697_Arm_Robot.h"

bool Arm_Robot::move(int x, int y)
{
    double z = calculate_distance(x, y); // z is distance between x and y
    if(is_holding ? 2*z : z > battery_level)
    {
        cout << "Battery level is not sufficient enough." << endl;
        return false;
    }
    else if(z > length)
    {
        cout << "Arm length is not long enough." << endl;
        return false;
    }
    else
    {
        position->first += x;
        position->second += y;
        battery_level -= is_holding ? 2*z : z;
        return true;
    }
}

bool Arm_Robot::pick_up(int weight)
{
    if(is_holding)
    {
        cout << "Is already holding an object." << endl;
        return false;
    }
    else if(battery_level < 1)
    {
        cout << "Battery level is not sufficient enough." << endl;
        return false;
    }
    else if(weight > weight_limit)
    {
        cout << "Weight exceeds weight limit." << endl;
        return false;
    }
    else
    {
        is_holding = true;
        battery_level++;
        return true;
    }
}

bool Arm_Robot::drop()
{
    if(!is_holding)
    {
        cout << "Is not holding an object." << endl;
        return false;
    }
    else if(battery_level < 1)
    {
        cout << "Battery level is not sufficient enough." << endl;
        return false;
    }
    else
    {
        is_holding = false;
        battery_level--;
        return true;
    }
}

double Robot::calculate_distance(int x, int y)
{
    x = abs(x);
    y = abs(y);
    return sqrt(x*x + y*y);
}
