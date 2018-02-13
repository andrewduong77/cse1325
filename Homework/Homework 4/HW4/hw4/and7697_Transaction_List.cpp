#include "and7697_Transaction_List.h"

bool Transaction_List::add_transaction(Date date, Transaction transaction)
{
    return transactions.insert(make_pair(date,transaction)).second;
}

void Transaction_List::list_transactions()
{
    if(transactions.size() == 0)
    {
        cout << "nothing in transactions" << endl;
        return;
    }
    map<Date,Transaction>::iterator it = transactions.begin();
    for(;it != transactions.end();it++)
        cout << it->first << " - " << it->second << endl;
}

double Transaction_List::get_average_transaction()
{
    double sum, count;
    sum = count = 0;
    map<Date,Transaction>::iterator it = transactions.begin();
    for(; it != transactions.end(); it++)
        sum += (it->second).get_price();
}

string Transaction_List::bonus()
{
    cout << "bonus() has not work yet" << endl; // Temporary message
}

string Transaction_List::to_string() const
{
    cout << "to_string has not work yet" << endl; // Temporary message
}

ostream& operator<<(ostream& ost, const Transaction_List& trans_list_two)
{
    ost << trans_list_two.to_string();
    return ost;
}

void Transaction_List::delete_transaction_by_date(Date d)
{
    cout << "delete_transaction_by_date(d) has not work yet" << endl; // Temporary message
}

void Transaction_List::delete_transactions_by_name(string n)
{
    cout << "delete_transactions_by_name(n) has not work yet" << endl; // Temporary message
}
