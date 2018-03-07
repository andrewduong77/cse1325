#include "and7697_Arm_Robot.h"

bool Arm_Robot::move(int x, int y)
{
    int d_x = abs(x - position.first);
    int d_y = abs(y - position.second);
    double d = calculate_distance(d_x, d_y); // d is distance between x and y
    double required_level = is_holding ? 2 * d : d; // required 1 extra unit of battery charge for a unit of distance moved
    if(required_level > battery_level)
    {
        cout << "Battery level is not sufficient enough." << endl;
        return false;
    }
    else if(d > length)
    {
        cout << "Arm length is not long enough." << endl;
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

bool Arm_Robot::pick_up(int weight)
{
    if(is_holding)
    {
        cout << name << " is already holding an object." << endl;
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
        battery_level--;
        return true;
    }
}

bool Arm_Robot::drop()
{
    if(!is_holding)
    {
        cout << name << " is not holding an object." << endl;
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
