#include "std_lib_facilities.h"
#include "arm.h"
#include <fstream>

void Arm::setPowerConsumed(double power){
  powerConsumed = power;
}
double Arm::getPowerConsumed(){
  return powerConsumed;
}
void Arm::displayArm()
{
  cout << "\nName: " << RobotParts::getName() << endl;
  cout << "Part #: " << RobotParts::getPartNumber() << endl;
  cout << "Type: " << RobotParts::getType() << endl;
  cout << "Weight: " << RobotParts::getWeight() << endl;
  cout << "Cost: " << RobotParts::getCost() << endl;
  cout << "Description: " << RobotParts::getDescription() << endl;
  cout << "Power Consumed: " << getPowerConsumed() << endl;
}


