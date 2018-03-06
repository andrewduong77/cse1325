#include "and7697_Extendable_Arm.h"

bool Extendable_Arm::move(int x, int y)
{
    int d_x = abs(x - position.first);
    int d_y = abs(y - position.second);
    double d = calculate_distance(d_x, d_y); // d is distance between x and y
//    int required_level;
//    if(is_holding && is_extended)
//        required_level = 3 * d;
//    else if(is_holding)
//        required_level = 2 * d;
//    else if(is_extended)
//        required_level = 2 * d;
    if(d > length)
    {
        if(extend())
            cout << "Arm extended." << endl;
        else
            cout << "Unable to extend arm." << endl;
    }
    else
    {
        if(retract())
            cout << "Arm retracted." << endl;
        else
            cout << "Unable to retract arm." << endl;
    }
    int load = 1;
    if(is_holding)
        load++;
    if(is_extended)
        load++;
    int required_level = load * d; // amount of each unit of battery charge needed for each unit of distance moved
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

bool Extendable_Arm::extend()
{
    if(is_extended)
        return false;
    else if(battery_level < 1)
        return false;
    else
    {
        is_extended = true;
        battery_level--;
        return true;
    }
}

bool Extendable_Arm::retract()
{
    if(!is_extended)
        return false;
    else if(battery_level < 1)
        return false;
    else
    {
        is_extended = false;
        battery_level--;
        return true;
    }
}

double Extendable_Arm::calculate_distance(int x, int y)
{
    return sqrt(x*x + y*y);
}
