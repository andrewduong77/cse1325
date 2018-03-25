#include "and7697_Super_Arm.h"
#include "and7697_Mobile_Arm.h"

int main()
{
    int x, y;

    // For Super_Arm Fanny

    Super_Arm fanny (1060, "Fanny", 100, 5, 5, 20, 20);

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(fanny.move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    int weight;

    weight = 3;
    if(fanny.Powered_Arm::pick_up(weight))
        cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    x = 3;
    y = -2;
    if(fanny.move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    if(fanny.Powered_Arm::drop())
        cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(fanny.move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    weight = 3;
    if(fanny.Powered_Arm::pick_up(weight))
        cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    x = 8;
    y = -4;
    if(fanny.move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    if(fanny.Powered_Arm::drop())
        cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    fanny.charge();

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(fanny.move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    weight = 9;
    if(fanny.Powered_Arm::pick_up(weight))
        cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    x = 3;
    y = -2;
    if(fanny.move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    if(fanny.Powered_Arm::drop())
        cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(fanny.move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    weight = 9;
    if(fanny.Powered_Arm::pick_up(weight))
        cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    x = 8;
    y = -4;
    if(fanny.move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    if(fanny.Powered_Arm::drop())
        cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny.get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Mobile_Arm Madame

    Mobile_Arm madame (1070, "Madame", 50, 5, 5, 20, 20);

    pair<int, int> position;

    position = madame.Mobile_Robot::get_position();
    cout << "Madame's battery level is currently at " << fixed << setprecision(0) << madame.Mobile_Robot::get_battery_percentage() << "%. Madame's position is (" << position.first << "," << position.second << ")." << endl;

    x = 10;
    y = 15;
    if(madame.move(x, y))
        cout << "Madame was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Madame was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    position = madame.Mobile_Robot::get_position();
    cout << "Madame's battery level is currently at " << fixed << setprecision(0) << madame.Mobile_Robot::get_battery_percentage() << "%. Madame's position is (" << position.first << "," << position.second << ")." << endl;

    x = -20;
    y = -30;
    if(madame.move(x, y))
        cout << "Madame was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Madame was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    position = madame.Mobile_Robot::get_position();
    cout << "Madame's battery level is currently at " << fixed << setprecision(0) << madame.Mobile_Robot::get_battery_percentage() << "%. Madame's position is (" << position.first << "," << position.second << ")." << endl;

    madame.Mobile_Robot::charge();

    position = madame.Mobile_Robot::get_position();
    cout << "Madame's battery level is currently at " << fixed << setprecision(0) << madame.Mobile_Robot::get_battery_percentage() << "%. Madame's position is (" << position.first << "," << position.second << ")." << endl;

    int speed;

    x = 15;
    y = 30;
    speed = 1;
    if(madame.move(x, y, speed))
        cout << "Madame was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Madame was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    position = madame.Mobile_Robot::get_position();
    cout << "Madame's battery level is currently at " << fixed << setprecision(0) << madame.Mobile_Robot::get_battery_percentage() << "%. Madame's position is (" << position.first << "," << position.second << ")." << endl;

    x = 25;
    y = 20;
    speed = 3;
    if(madame.move(x, y, speed))
        cout << "Madame was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Madame was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    position = madame.Mobile_Robot::get_position();
    cout << "Madame's battery level is currently at " << fixed << setprecision(0) << madame.Mobile_Robot::get_battery_percentage() << "%. Madame's position is (" << position.first << "," << position.second << ")." << endl;

    madame.Mobile_Robot::charge();

    position = madame.Mobile_Robot::get_position();
    cout << "Madame's battery level is currently at " << fixed << setprecision(0) << madame.Mobile_Robot::get_battery_percentage() << "%. Madame's position is (" << position.first << "," << position.second << ")." << endl;

    // move_arm() does not work correctly, it keeps seeing current position as (0,0)
    x = 25;
    y = 20;
    if(madame.move_arm(x, y))
        cout << "Madame was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Madame was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    position = madame.Mobile_Robot::get_position();
    cout << "Madame's battery level is currently at " << fixed << setprecision(0) << madame.Mobile_Robot::get_battery_percentage() << "%. Madame's position is (" << position.first << "," << position.second << ")." << endl;

    int base_x, base_y, arm_x, arm_y;

    // move() does not work correctly with base and arm, it keeps seeing the current position as (0,0)
    base_x = 20;
    base_y = 25;
    arm_x = 25;
    arm_y = 20;
    if(madame.move(base_x, base_y, arm_x, arm_y))
        cout << "Madame was able to move base to (" << defaultfloat << base_x << "," << base_y << ") and arm to (" << arm_x << "," << arm_y << ")." << endl;
    else
        cout << "Madame was unable to move base to (" << defaultfloat << base_x << "," << base_y << ") and arm to (" << arm_x << "," << arm_y << ")." << endl;

    position = madame.Mobile_Robot::get_position();
    cout << "Madame's battery level is currently at " << fixed << setprecision(0) << madame.Mobile_Robot::get_battery_percentage() << "%. Madame's position is (" << position.first << "," << position.second << ")." << endl;
}
