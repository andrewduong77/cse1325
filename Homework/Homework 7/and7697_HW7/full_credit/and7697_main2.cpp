#include "and7697_Super_Arm.h"
#include "and7697_Mobile_Arm.h"

int main()
{
    int x, y;

    // For Robot Bigweld

    Robot *bigweld = new Robot(1010, "Bigweld", 100);

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld->get_battery_percentage() << "%." << endl;

    x = -30;
    y = 20;
    if(bigweld->move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld->get_battery_percentage() << "%." << endl;

    x = -10;
    y = 40;
    if(bigweld->move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld->get_battery_percentage() << "%." << endl;

    x = 0;
    y = 8;
    if(bigweld->move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld->get_battery_percentage() << "%." << endl;

    bigweld->charge();

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld->get_battery_percentage() << "%." << endl;

    x = -40;
    y = -40;
    if(bigweld->move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld->get_battery_percentage() << "%." << endl;

    x = -3;
    y = -40;
    if(bigweld->move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld->get_battery_percentage() << "%." << endl;

    x = -3;
    y = -39;
    if(bigweld->move(x, y))
        cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << bigweld->get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Mobile_Robot Mr_Gunk

    int speed;

    Mobile_Robot *mr_gunk = new Mobile_Robot(1020, "Mr_Gunk", 100);

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk->get_battery_percentage() << "%." << endl;

    x = 10;
    y = -20;
    speed = 3;
    if(mr_gunk->move(x, y, speed))
        cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk->get_battery_percentage() << "%." << endl;

    x = 10;
    y = -10;
    speed = 1;
    if(mr_gunk->move(x, y, speed))
        cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk->get_battery_percentage() << "%." << endl;

    x = 20;
    y = -10;
    speed = 2;
    if(mr_gunk->move(x, y, speed))
        cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk->get_battery_percentage() << "%." << endl;

    x = 21;
    y = -10;
    if(mr_gunk->move(x, y))
        cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
    else
        cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

    cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << mr_gunk->get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Arm_Robot Piper

    Arm_Robot *piper = new Arm_Robot(1030, "Piper", 100, 40, 30);

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper->get_battery_percentage() << "%." << endl;

    x = -15;
    y = 10;
    if(piper->move(x, y))
        cout << "Piper was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Piper was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper->get_battery_percentage() << "%." << endl;

    int weight;

    weight = 25;
    if(piper->pick_up(weight))
        cout << "Piper was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Piper was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper->get_battery_percentage() << "%." << endl;

    x = -20;
    y = 10;
    if(piper->move(x, y))
        cout << "Piper was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Piper was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper->get_battery_percentage() << "%." << endl;

    if(piper->drop())
        cout << "Piper was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Piper was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper->get_battery_percentage() << "%." << endl;

    weight = 35;
    if(piper->pick_up(weight))
        cout << "Piper was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Piper was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper->get_battery_percentage() << "%." << endl;

    x = -20;
    y = 40;
    if(piper->move(x, y))
        cout << "Piper was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Piper was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Piper's battery level is currently at " << fixed << setprecision(0) << piper->get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Extendable_Arm Rodney

    Extendable_Arm *rodney = new Extendable_Arm(1040, "Rodney", 100, 5, 20, 15);

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(rodney->move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    weight = 10;
    if(rodney->pick_up(weight))
        cout << "Rodney was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    x = -2;
    y = 2;
    if(rodney->move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    if(rodney->drop())
        cout << "Rodney was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    x = -5;
    y = 10;
    if(rodney->move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    weight = 15;
    if(rodney->pick_up(weight))
        cout << "Rodney was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    x = -4;
    y = 11;
    if(rodney->move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    if(rodney->drop())
        cout << "Rodney was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    x = -2;
    y = 5;
    if(rodney->move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    weight = 10;
    if(rodney->pick_up(weight))
        cout << "Rodney was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(rodney->move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    if(rodney->drop())
        cout << "Rodney was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Rodney was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    x = -15;
    y = 25;
    if(rodney->move(x, y))
        cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << rodney->get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Powered_Arm Crank

    Powered_Arm *crank = new Powered_Arm(1050, "Crank", 100, 20, 5, 20);

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    x = -7;
    y = 15;
    if(crank->move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    weight = 2;
    if(crank->pick_up(weight))
        cout << "Crank was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    x = -5;
    y = 10;
    if(crank->move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    if(crank->drop())
        cout << "Crank was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    x = -5;
    y = 8;
    if(crank->move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    weight = 10;
    if(crank->pick_up(weight))
        cout << "Crank was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    x = -5;
    y = 10;
    if(crank->move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    if(crank->drop())
        cout << "Crank was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    x = 0;
    y = 10;
    if(crank->move(x, y))
        cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    weight = 25;
    if(crank->pick_up(weight))
        cout << "Crank was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Crank was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Crank's battery level is currently at " << fixed << setprecision(0) << crank->get_battery_percentage() << "%." << endl;

    cout << endl;

    // For Super_Arm Fanny

    Super_Arm *fanny = new Super_Arm(1060, "Fanny", 100, 5, 5, 20, 20);

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(fanny->move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    weight = 3;
    if(fanny->Powered_Arm::pick_up(weight))
        cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    x = 3;
    y = -2;
    if(fanny->move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    if(fanny->Powered_Arm::drop())
        cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(fanny->move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    weight = 3;
    if(fanny->Powered_Arm::pick_up(weight))
        cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    x = 8;
    y = -4;
    if(fanny->move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    if(fanny->Powered_Arm::drop())
        cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    fanny->charge();

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(fanny->move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    weight = 9;
    if(fanny->Powered_Arm::pick_up(weight))
        cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    x = 3;
    y = -2;
    if(fanny->move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    if(fanny->Powered_Arm::drop())
        cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    x = -3;
    y = 2;
    if(fanny->move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    weight = 9;
    if(fanny->Powered_Arm::pick_up(weight))
        cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    x = 8;
    y = -4;
    if(fanny->move(x, y))
        cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
    else
        cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;

    if(fanny->Powered_Arm::drop())
        cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
    else
        cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

    cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << fanny->get_battery_percentage() << "%." << endl;
}
