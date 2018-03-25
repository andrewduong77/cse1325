#include "and7697_Super_Arm.h"

bool Super_Arm::move(int x, int y)
{
    int d_x = abs(x - position.first);
    int d_y = abs(y - position.second);
    double d_p = calculate_distance(d_x, d_y); // d_p is distance from position
    double d_o = calculate_distance(abs(x), abs(y)); // d_o is distance from origin (0,0)
    if(d_o > Extendable_Arm::length)
    {
        if(d_o > Extendable_Arm::length + extend_length)
        {
            cout << "Arm length is still not long enough." << endl;
            return false;
        }
        else if(extend())
            cout << "Arm extended." << endl;
    }
    else
    {
        if(retract())
            cout << "Arm retracted." << endl;
    }
    int load = 1;
    if(Extendable_Arm::is_holding || Powered_Arm::is_holding)
        load++;
    if(is_extended)
        load++;
    if(motor_on)
        load++;
    int required_level = load * d_p; // amount of each unit of battery charge needed for each unit of distance moved
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