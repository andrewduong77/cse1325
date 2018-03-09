
#ifndef SALES_H
#define SALES_H
#include "Employee.h"

class Sales : public virtual Employee
{
public:
    double pay(double);
    Sales(string n, int i, double cr): commission_rate{cr}, total_amount_sold{0}, Employee(n, i) {set_type("Sales");};
    void add_sales(double sale);
protected:
    double total_amount_sold;
    double commission_rate;
};
#endif
