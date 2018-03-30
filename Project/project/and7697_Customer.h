#ifndef AND7697_CUSTOMER_H_INCLUDED
#define AND7697_CUSTOMER_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Customer
{
public:
    Customer(string n, int idn, int p, string e, double b) : name{n}, id{idn}, phone{p}, email{e}, balance{b} {};
    string get_name();
    int get_id();
    int get_phone();
    string get_email();
    double get_balance();
private:
    string name;
    int id;
    int phone;
    string email;
    double balance;
};

#endif // AND7697_CUSTOMER_H_INCLUDED
