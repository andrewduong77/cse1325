#include "Stock_boy.h"

void Stock_boy::add_hours(int hours)
{
    num_hours_worked += hours;
}

double Stock_boy::pay()
{
    double payment = pay_rate * num_hours_worked;
    return payment;
}

string Stock_boy::get_name()
{
return name;
}
