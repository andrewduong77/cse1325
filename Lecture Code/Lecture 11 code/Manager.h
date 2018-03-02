#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public virtual Employee
{
public:
    double pay(double);
    Manager(string n, int i, double s): salary{s}, Employee(n, i) {};
private:
    double salary;
};
