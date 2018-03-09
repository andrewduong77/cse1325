#include "Employee.h"

class Stock_boy : public Employee
{
public:
    double pay();
    double pay(double);
    Stock_boy(string n, int i, double pr) : Employee(n, i), pay_rate{pr}, num_hours_worked{0} {Employee::set_type("Stock_Boy");};
    void add_hours(int);
   
private:
    double pay_rate;
    int num_hours_worked;
};
