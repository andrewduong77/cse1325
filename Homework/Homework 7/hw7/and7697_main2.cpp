#include "and7697_Super_Arm.h"
#include "and7697_Mobile_Arm.h"

int main()
{
    int x, y, speed, weight;

    vector<Robot*> Robots;

    Robot *bigweld = new Robot(1010, "Bigweld", 100);
    Robot *mr_gunk = new Mobile_Robot(1020, "Mr_Gunk", 100);
    Robot *piper = new Arm_Robot(1030, "Piper", 100, 40, 30);
    Robot *rodney = new Extendable_Arm(1040, "Rodney", 100, 5, 20, 15);
    Robot *crank = new Powered_Arm(1050, "Crank", 100, 20, 5, 20);
    Robot *fanny = new Super_Arm(1060, "Fanny", 100, 5, 5, 20, 20);

    Robots.push_back(bigweld);
    Robots.push_back(mr_gunk);
    Robots.push_back(piper);
    Robots.push_back(rodney);
    Robots.push_back(crank);
    Robots.push_back(fanny);

    for(Robot* it : Robots)
    {
        if(it->get_type() == "Robot")
        {
            // For Robot Bigweld

            cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -30;
            y = 20;
            if(it->move(x, y))
                cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -10;
            y = 40;
            if(it->move(x, y))
                cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 0;
            y = 8;
            if(it->move(x, y))
                cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            it->charge();

            cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -40;
            y = -40;
            if(it->move(x, y))
                cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -3;
            y = -40;
            if(it->move(x, y))
                cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -3;
            y = -39;
            if(it->move(x, y))
                cout << "Bigweld was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Bigweld was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Bigweld's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            cout << endl;
        }
        if(it->get_type() == "Mobile_Robot")
        {
            // For Mobile_Robot Mr_Gunk

            cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 10;
            y = -20;
            speed = 3;
            if(((Mobile_Robot*)it)->move(x, y, speed))
                cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
            else
                cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

            cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 10;
            y = -10;
            speed = 1;
            if(((Mobile_Robot*)it)->move(x, y, speed))
                cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
            else
                cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

            cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 20;
            y = -10;
            speed = 2;
            if(((Mobile_Robot*)it)->move(x, y, speed))
                cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
            else
                cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

            cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 21;
            y = -10;
            if(((Mobile_Robot*)it)->move(x, y))
                cout << "Mr_Gunk was able to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;
            else
                cout << "Mr_Gunk was unable to move to (" << defaultfloat << x << "," << y << ") at the speed of " << speed << "." << endl;

            cout << "Mr_Gunk's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            cout << endl;
        }
        if(it->get_type() == "Arm_Robot")
        {
            // For Arm_Robot Piper

            cout << "Piper's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -15;
            y = 10;
            if((dynamic_cast<Arm_Robot*>(it))->move(x, y))
                cout << "Piper was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Piper was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Piper's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 25;
            if((dynamic_cast<Arm_Robot*>(it))->pick_up(weight))
                cout << "Piper was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Piper was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Piper's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -20;
            y = 10;
            if((dynamic_cast<Arm_Robot*>(it))->move(x, y))
                cout << "Piper was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Piper was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Piper's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Arm_Robot*>(it))->drop())
                cout << "Piper was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Piper was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Piper's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 35;
            if((dynamic_cast<Arm_Robot*>(it))->pick_up(weight))
                cout << "Piper was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Piper was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Piper's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -20;
            y = 40;
            if((dynamic_cast<Arm_Robot*>(it))->move(x, y))
                cout << "Piper was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Piper was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Piper's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            cout << endl;
        }
        if(it->get_type() == "Extendable_Arm")
        {
            // For Extendable_Arm Rodney

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -3;
            y = 2;
            if((dynamic_cast<Extendable_Arm*>(it))->move(x, y))
                cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 10;
            if((dynamic_cast<Extendable_Arm*>(it))->pick_up(weight))
                cout << "Rodney was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Rodney was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -2;
            y = 2;
            if((dynamic_cast<Extendable_Arm*>(it))->move(x, y))
                cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Extendable_Arm*>(it))->drop())
                cout << "Rodney was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Rodney was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -5;
            y = 10;
            if((dynamic_cast<Extendable_Arm*>(it))->move(x, y))
                cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 15;
            if((dynamic_cast<Extendable_Arm*>(it))->pick_up(weight))
                cout << "Rodney was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Rodney was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -4;
            y = 11;
            if((dynamic_cast<Extendable_Arm*>(it))->move(x, y))
                cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Extendable_Arm*>(it))->drop())
                cout << "Rodney was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Rodney was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -2;
            y = 5;
            if((dynamic_cast<Extendable_Arm*>(it))->move(x, y))
                cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 10;
            if((dynamic_cast<Extendable_Arm*>(it))->pick_up(weight))
                cout << "Rodney was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Rodney was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -3;
            y = 2;
            if((dynamic_cast<Extendable_Arm*>(it))->move(x, y))
                cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Extendable_Arm*>(it))->drop())
                cout << "Rodney was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Rodney was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -15;
            y = 25;
            if((dynamic_cast<Extendable_Arm*>(it))->move(x, y))
                cout << "Rodney was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Rodney was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Rodney's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            cout << endl;
        }
        if(it->get_type() == "Powered_Arm")
        {
            // For Powered_Arm Crank

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -7;
            y = 15;
            if(((dynamic_cast<Powered_Arm*>(it)))->move(x, y))
                cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 2;
            if((dynamic_cast<Powered_Arm*>(it))->pick_up(weight))
                cout << "Crank was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Crank was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -5;
            y = 10;
            if((dynamic_cast<Powered_Arm*>(it))->move(x, y))
                cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Powered_Arm*>(it))->drop())
                cout << "Crank was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Crank was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -5;
            y = 8;
            if((dynamic_cast<Powered_Arm*>(it))->move(x, y))
                cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 10;
            if((dynamic_cast<Powered_Arm*>(it))->pick_up(weight))
                cout << "Crank was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Crank was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -5;
            y = 10;
            if((dynamic_cast<Powered_Arm*>(it))->move(x, y))
                cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Powered_Arm*>(it))->drop())
                cout << "Crank was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Crank was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 0;
            y = 10;
            if((dynamic_cast<Powered_Arm*>(it))->move(x, y))
                cout << "Crank was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Crank was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 25;
            if((dynamic_cast<Powered_Arm*>(it))->pick_up(weight))
                cout << "Crank was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Crank was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Crank's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            cout << endl;
        }
        if(it->get_type() == "Super_Arm")
        {
            // For Super_Arm Fanny

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -3;
            y = 2;
            if((dynamic_cast<Super_Arm*>(it))->move(x, y))
                cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 3;
            if((dynamic_cast<Super_Arm*>(it))->Powered_Arm::pick_up(weight))
                cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 3;
            y = -2;
            if((dynamic_cast<Super_Arm*>(it))->move(x, y))
                cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Super_Arm*>(it))->Powered_Arm::drop())
                cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -3;
            y = 2;
            if((dynamic_cast<Super_Arm*>(it))->move(x, y))
                cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 3;
            if((dynamic_cast<Super_Arm*>(it))->Powered_Arm::pick_up(weight))
                cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 8;
            y = -4;
            if((dynamic_cast<Super_Arm*>(it))->move(x, y))
                cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Super_Arm*>(it))->Powered_Arm::drop())
                cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            (dynamic_cast<Super_Arm*>(it))->charge();

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -3;
            y = 2;
            if((dynamic_cast<Super_Arm*>(it))->move(x, y))
                cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 9;
            if((dynamic_cast<Super_Arm*>(it))->Powered_Arm::pick_up(weight))
                cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 3;
            y = -2;
            if((dynamic_cast<Super_Arm*>(it))->move(x, y))
                cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Super_Arm*>(it))->Powered_Arm::drop())
                cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = -3;
            y = 2;
            if((dynamic_cast<Super_Arm*>(it))->move(x, y))
                cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            weight = 9;
            if((dynamic_cast<Super_Arm*>(it))->Powered_Arm::pick_up(weight))
                cout << "Fanny was able to pick up an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Fanny was unable to pick up an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            x = 8;
            y = -4;
            if((dynamic_cast<Super_Arm*>(it))->move(x, y))
                cout << "Fanny was able to move to (" << defaultfloat << x << "," << y << ")." << endl;
            else
                cout << "Fanny was unable to move to (" << defaultfloat << x << "," << y << ")." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;

            if((dynamic_cast<Super_Arm*>(it))->Powered_Arm::drop())
                cout << "Fanny was able to drop an object of a weight of " << defaultfloat << weight << "." << endl;
            else
                cout << "Fanny was unable to drop an object of a weight of " << defaultfloat << weight << "." << endl;

            cout << "Fanny's battery level is currently at " << fixed << setprecision(0) << it->get_battery_percentage() << "%." << endl;
        }
    }
}
