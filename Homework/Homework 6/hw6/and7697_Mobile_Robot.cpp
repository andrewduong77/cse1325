#include "and7697_Mobile_Robot.h"

bool Mobile_Robot::move(int x, int y)
{
    int d_x = abs(x - position.first);
    int d_y = abs(y - position.second);
    double d = calculate_distance(d_x, d_y); // d is distance between x and y
    double required_level = speed_level * d; // required battery level for each unit of distance moved
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
        cout << name << " moved to (" << position.first << "," << position.second << ")." << endl;
        return true;
    }
}

bool Mobile_Robot::move(int x, int y, int speed)
{
    set_speed_level(speed);
    int d_x = abs(x - position.first);
    int d_y = abs(y - position.second);
    double d = calculate_distance(d_x, d_y); // d is distance between x and y
    double required_level = speed_level * d; // required battery level for each unit of distance moved
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
        cout << name << " moved to (" << position.first << "," << position.second << ")." << endl;
        return true;
    }
}

void Mobile_Robot::set_speed_level(int speed)
{
    speed_level = speed;
}
