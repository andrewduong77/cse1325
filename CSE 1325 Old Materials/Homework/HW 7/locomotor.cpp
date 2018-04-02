#include "std_lib_facilities.h"
#include "locomotor.h"
void Locomotor::setPowerConsumed(double power){
  powerConsumed = power;
}
void Locomotor::setMaxSpeed(int speed){
  maxSpeed = speed;
}
double Locomotor::getPowerConsumed(){
  return powerConsumed;
}
int Locomotor::getMaxSpeed(){
  return maxSpeed;
}

void Locomotor::displayLocomotor()
{
  cout << "\nName: " << RobotParts::getName() << endl;
  cout << "Part #: " << RobotParts::getPartNumber() << endl;
  cout << "Type: " << RobotParts::getType() << endl;
  cout << "Weight: " << RobotParts::getWeight() << endl;
  cout << "Cost: " << RobotParts::getCost() << endl;
  cout << "Description: " << RobotParts::getDescription() << endl;
  cout << "Power Consumed: " << getPowerConsumed() << endl;
  cout << "Maximum Speed: " << getMaxSpeed() << endl;
}

