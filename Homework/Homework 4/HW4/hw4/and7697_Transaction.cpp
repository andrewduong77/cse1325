#include "and7697_Transaction.h"

double Transaction::get_price()
{
    return price;
}

string Transaction::get_name()
{
    return name;
}

string Transaction::to_string() const
{
    return std::to_string(price) + " " + std::to_string(name);
}

ostream& Transaction::operator<< (ostream& ost, const Transaction& trans_two)
{
    ost << trans_two.to_string();
    return ost;
}
