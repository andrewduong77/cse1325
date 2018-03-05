#include "Sales.h"

double Sales::pay()
{
    double payment = total_amount_sold * commission_rate;
    return Employee::pay(payment);
}

void Sales::add_sales(double sale)
{
    total_amount_sold += sale;
}
