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
}
