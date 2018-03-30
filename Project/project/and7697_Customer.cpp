#include "and7697_Customer.h"

string Customer::get_name()
{
    return name;
}

int Customer::get_id()
{
    return id;
}

int Customer::get_phone()
{
    return phone;
}

string Customer::get_email()
{
    return email;
}

double Customer::get_balance()
{
    return balance;
}

void Customer::set_type(string type)
{
    this->type = type;
}

string Customer::get_type()
{
    return type;
}
