#include "Employee.h"

double Employee::pay(double pre_tax)
{
    return pre_tax * 0.9;
}

string Employee::get_name()
{
return name;
}

string Employee::get_type()
{
return type;
}

void Employee::set_type(string type)
{
    this->type = type;
}
