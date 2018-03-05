#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee{
public:
    Employee(string n, int i) : name {n}, id{i} {};
    virtual double pay(double)=0;
     string get_name();
protected:
    string name;
    int id;
};
#endif
