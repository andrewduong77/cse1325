#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee{
public:
    Employee(string n, int i) : name {n}, id{i}, type{"Employee"} {};
    virtual double pay(double) = 0;
     string get_name();
     string get_type();
    void set_type(string);
protected:
    string name;
    int id;
    string type;
};
#endif
