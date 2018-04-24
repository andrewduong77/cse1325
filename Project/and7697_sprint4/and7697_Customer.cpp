#include "and7697_Customer.h"

void Customer::pay_balance()
{
    this->balance = 0.0; // reset balance to zero after paying balance
}

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

string Customer::to_string() const
{
    string out;
    ostringstream ost;
    ost << R"(
======================
Customer
======================
              )" << endl;
    ost << "Name: " << this->name << endl;
    ost << "ID: " << this->id << endl;
    ost << "Phone: " << this->id << endl;
    ost << "Email: " << this->email << endl;
    ost << "Balance: " << fixed << setprecision(2) << this->balance << endl;
    out = ost.str();
    return out;
}

string Customer::to_string_file() const
{
    string out;
    ostringstream ost;
    ost << this->name << ";"
        << this->id << ";"
        << this->phone << ";"
        << this->email << ";"
        << this->balance << endl;
    out = ost.str();
    return out;
}

ostream& operator<<(ostream& ost, const Customer& customer_two)
{
    ost << R"(
======================
Customer
======================
              )" << endl;
    ost << "Name: " << customer_two.name << endl;
    ost << "ID: " << customer_two.id << endl;
    ost << "Phone: " << customer_two.id << endl;
    ost << "Email: " << customer_two.email << endl;
    ost << "Balance: " << fixed << setprecision(2) << customer_two.balance << endl;
    return ost;
}
