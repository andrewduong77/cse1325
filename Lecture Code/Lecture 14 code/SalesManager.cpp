#include "SalesManager.h"

double SalesManager::pay(double bonus)
{
    double payment = salary / 12;
    payment += total_amount_sold * commission_rate;
    return payment;
}
