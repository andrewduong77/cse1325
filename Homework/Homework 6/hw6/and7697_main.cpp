#include "and7697_Extendable_Arm.h"
#include "and7697_Powered_Arm.h"

//#include <iostream>

int main()
{
    Robot bigweld (1010, "Bigweld", 100);
    cout << "Bigweld is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "% charge." << endl;
    if(bigweld.move(-30, 50))
        cout << "Bigweld was able to move." << endl;
    else
        cout << "Bigweld was unable to move." << endl;
    cout << "Bigweld is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "% charge." << endl;
    Arm_Robot piper (1020, "Piper", 100, 30, 40);
    if(piper.move(15, -20))
        cout << "Piper was able to move." << endl;
    else
        cout << "Piper was unable to move." << endl;
    if(piper.pick_up(40))
        cout << "Piper was able to pick up." << endl;
    else
        cout << "Piper was unable to pick up." << endl;
    if(piper.drop())
        cout << "Piper was able to drop." << endl;
    else
        cout << "Piper was unable to drop." << endl;
    if(piper.drop())
        cout << "Piper was able to drop." << endl;
    else
        cout << "Piper was unable to drop." << endl;
    Extendable_Arm aunt_fanny (1030, "Aunt_Fanny", 100, 20, 30, 20);
    if(aunt_fanny.move(-35, 5))
        cout << "Aunt_Fanny was able to move." << endl;
    else
        cout << "Aunt_Fanny was unable to move." << endl;
    if(aunt_fanny.pick_up(31))
        cout << "Aunt_Fanny was able to pick up." << endl;
    else
        cout << "Aunt_Fanny was unable to pick up." << endl;
    if(aunt_fanny.pick_up(30))
        cout << "Aunt_Fanny was able to pick up." << endl;
    else
        cout << "Aunt_Fanny was unable to pick up." << endl;
    if(aunt_fanny.pick_up(29))
        cout << "Aunt_Fanny was able to pick up." << endl;
    else
        cout << "Aunt_Fanny was unable to pick up." << endl;
    return 0;
}
