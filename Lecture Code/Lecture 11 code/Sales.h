#include "Employee.h"

class Sales
{
public:
    double pay();
    Sales(string n, int i, double cr): commission_rate{cr}, total_amount_sold{0}, Employee(n, i) {};
    void add_sales(double sale);
private:
    double total_amount_sold;
    double commission_rate;
};
