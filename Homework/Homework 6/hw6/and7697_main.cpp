#include "and7697_Extendable_Arm.h"
#include "and7697_Powered_Arm.h"

//#include <iostream>

int main()
{
    Robot bigweld (17, "Bigweld", 100);
    cout << "Bigweld is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "% charge." << endl;
    if(bigweld.move(-30, 50))
//        cout << "Bigweld moved to (-3,5)." << endl;
        cout << "Bigweld was able to move." << endl;
    else
        cout << "Bigweld was unable to move." << endl;
    cout << "Bigweld is currently at " << fixed << setprecision(0) << bigweld.get_battery_percentage() << "% charge." << endl;
    Arm_Robot piper (18, "Piper", 100, 30, 40);
    if(piper.move(30,-40))
        cout << "Piper was able to move." << endl;
    else
        cout << "Piper was unable to move." << endl;
    return 0;
}
