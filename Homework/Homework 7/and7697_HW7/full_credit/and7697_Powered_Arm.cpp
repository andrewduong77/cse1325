#include "and7697_Powered_Arm.h"

bool Powered_Arm::move(int x, int y)
{
    int d_x = abs(x - position.first);
    int d_y = abs(y - position.second);
    double d_p = calculate_distance(d_x, d_y); // d_p is distance from position
    double d_o = calculate_distance(abs(x), abs(y)); // d_o is distance from origin (0,0)
    int load = 1;
    if(is_holding)
        load++;
    if(motor_on)
        load += 2;
    int required_level = load * d_p; // amount of each unit of battery charge needed for each unit of distance moved
    if(required_level > battery_level)
    {
        cout << "Battery level is not sufficient enough." << endl;
        return false;
    }
    else if(d_o > length)
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

bool Powered_Arm::pick_up(int weight)
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
    else if(weight > motor_limit)
    {
        cout << "Weight exceeds motor limit." << endl;
        return false;
    }
    else
    {
        if(weight > weight_limit)
        {
            power_on();
            cout << "Motor powered on." << endl;
        }
        else
        {
            power_off();
            cout << "Motor powered off." << endl;
        }
        is_holding = true;
        battery_level--;
        return true;
    }
}

bool Powered_Arm::drop()
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
        if(motor_on)
        {
            power_off();
            cout << "Motor powered off." << endl;
        }
        is_holding = false;
        battery_level--;
        return true;
    }
}

void Powered_Arm::power_on()
{
    motor_on = true;
}

void Powered_Arm::power_off()
{
    motor_on = false;
}
