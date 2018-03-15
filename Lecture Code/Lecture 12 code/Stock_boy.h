#include "Employee.h"

class Stock_boy : public Employee
{
public:
    double pay();
    double pay(double bonus);
    Stock_boy(string n, int i, double pr) : pay_rate{pr}, num_hours_worked{0}, Employee(n, i){};
    void add_hours(int hours);
   
private:
    double pay_rate;
    int num_hours_worked;
};