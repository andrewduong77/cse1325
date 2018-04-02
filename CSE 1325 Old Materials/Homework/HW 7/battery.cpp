#include "std_lib_facilities.h"
#include "battery.h"
void Battery::setEnergyContained(double energy){
  energyContained = energy;
}
double Battery::getEnergyContained(){
  return energyContained;
}

void Battery::displayBattery()
{
  cout << "\nName: " << RobotParts::getName() << endl;
  cout << "Part #: " << RobotParts::getPartNumber() << endl;
  cout << "Type: " << RobotParts::getType() << endl;
  cout << "Weight: " << RobotParts::getWeight() << endl;
  cout << "Cost: " << RobotParts::getCost() << endl;
  cout << "Description: " << RobotParts::getDescription() << endl;
  cout << "Energy Contained: " << getEnergyContained() << endl;
}

