#include "Sales.h"

double Sales::pay(double bonus)
{
    double payment = total_amount_sold * commission_rate + bonus;
    return payment;
}

void Sales::add_sales(double sale)
{
    total_amount_sold += sale;
}
