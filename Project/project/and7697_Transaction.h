#ifndef AND7697_TRANSACTION_H_INCLUDED
#define AND7697_TRANSACTION_H_INCLUDED

#include "and7697_Bundle.h"
#include "and7697_Media.h"
#include "and7697_Librarian.h"
#include "and7697_Customer.h"
#include "and7697_Date.h"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

class Transaction
{
public:
    double calculate_fee();
    string to_string() const;
    string to_string_file() const;
private:
    int transaction_number;
    Date check_out_date;
    Librarian librarian;
    Customer customer;
    vector<Media*> media;
    vector<Bundle*> bundle;
    Date check_in_date;
    Date due_date;
};

#endif // AND7697_TRANSACTION_H_INCLUDED
