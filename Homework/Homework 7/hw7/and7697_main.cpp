#include "and7697_Extendable_Arm.h"
#include "and7697_Powered_Arm.h"
#include "and7697_Mobile_Robot.h"

//#include <iostream>

int main()
{
    int x, y;

    // For Robot Bigweld

    Robot bigweld (1010, "Bigweld", 100);

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "%." << endl;

    x = -30;
    y = 20;
    if(bigweld.move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "%." << endl;

    x = -10;
    y = 40;
    if(bigweld.move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "%." << endl;

    x = 0;
    y = 8;
    if(bigweld.move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "%." << endl;

    bigweld.charge();

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "%." << endl;

    x = -40;
    y = -40;
    if(bigweld.move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "%." << endl;

    x = -3;
    y = -40;
    if(bigweld.move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "%." << endl;

    x = -3;
    y = -39;
    if(bigweld.move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Mobile_Robot Mr_Gunk

    int speed;

    Mobile_Robot mr_gunk (1020, "Mr_Gunk", 100);

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk.get_battery_percentage() << "%." << endl;

    x = 10;
    y = -20;
    speed = 3;
    if(mr_gunk.move(x, y, speed))
        cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk.get_battery_percentage() << "%." << endl;

    x = 10;
    y = -10;
    speed = 1;
    if(mr_gunk.move(x, y, speed))
        cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk.get_battery_percentage() << "%." << endl;

    x = 20;
    y = -10;
    speed = 2;
    if(mr_gunk.move(x, y, speed))
        cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk.get_battery_percentage() << "%." << endl;

    x = 21;
    y = -10;
    if(mr_gunk.move(x, y))
        cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk.get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Arm_Robot Piper

    Arm_Robot piper (1030, "Piper", 100, 40, 30);

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper.get_battery_percentage() << "%." << endl;

    x = -15;
    y = 10;
    if(piper.move(x, y))
        cout << "Piper was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Piper was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper.get_battery_percentage() << "%." << endl;

    int weight;

    weight = 25;
    if(piper.pick_up(weight))
        cout << "Piper was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Piper was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper.get_battery_percentage() << "%." << endl;

    x = -20;
    y = 10;
    if(piper.move(x, y))
        cout << "Piper was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Piper was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper.get_battery_percentage() << "%." << endl;

    if(piper.drop())
        cout << "Piper was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Piper was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper.get_battery_percentage() << "%." << endl;

    weight = 35;
    if(piper.pick_up(weight))
        cout << "Piper was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Piper was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper.get_battery_percentage() << "%." << endl;

    x = -20;
    y = 40;
    if(piper.move(x, y))
        cout << "Piper was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Piper was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper.get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Extendable_Arm Rodney

    Extendable_Arm rodney (1040, "Rodney", 100, 5, 20, 15);

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(rodney.move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    weight = 10;
    if(rodney.pick_up(weight))
        cout << "Rodney was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    x = -2;
    y = 2;
    if(rodney.move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    if(rodney.drop())
        cout << "Rodney was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    x = -5;
    y = 10;
    if(rodney.move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    weight = 15;
    if(rodney.pick_up(weight))
        cout << "Rodney was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    x = -4;
    y = 11;
    if(rodney.move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    if(rodney.drop())
        cout << "Rodney was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    x = -2;
    y = 5;
    if(rodney.move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    weight = 10;
    if(rodney.pick_up(weight))
        cout << "Rodney was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    x = -4;
    y = 11;
    if(rodney.move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    if(rodney.drop())
        cout << "Rodney was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    x = -15;
    y = 25;
    if(rodney.move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney.get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Powered_Arm Crank

    Powered_Arm crank (1050, "Crank", 100, 20, 5, 20);

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    x = -7;
    y = 15;
    if(crank.move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    weight = 2;
    if(crank.pick_up(weight))
        cout << "Crank was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    x = -5;
    y = 10;
    if(crank.move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    if(crank.drop())
        cout << "Crank was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    x = -5;
    y = 8;
    if(crank.move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    weight = 10;
    if(crank.pick_up(weight))
        cout << "Crank was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    x = -5;
    y = 10;
    if(crank.move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    if(crank.drop())
        cout << "Crank was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    x = 0;
    y = 10;
    if(crank.move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;

    weight = 25;
    if(crank.pick_up(weight))
        cout << "Crank was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank.get_battery_percentage() << "%." << endl;
}
