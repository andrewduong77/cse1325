#include "and7697_Transaction_List.h"

bool Transaction_List::add_transaction(Date date, Transaction transaction)
{
    return transactions.insert(make_pair(date,transaction)).second;
}

void Transaction_List::list_transactions()
{
//    cout << transactions;
}

double Transaction_List::get_average_transaction()
{
    double sum, count;
    sum = count = 0;
    map<Date,Transaction>::iterator it = transactions.begin();
    for(; it != transactions.end(); it++, count++)
        sum += (it->second).get_price();
        return sum / count;
}

string Transaction_List::bonus()
{
    string name;
    double max;
    max = 0;
    map<Date,Transaction>::iterator it = transactions.begin();
    for(; it != transactions.end(); it++)
    {
        if(it->second.Transaction::get_price() > max)
        {
            max = it->second.Transaction::get_price();
            name = it->second.Transaction::get_name();
        }
    }
    return name;
}


string Transaction_List::to_string() const
{
    string out;
    if(transactions.size() == 0)
    {
        out = "nothing in transactions\n";
        return out;
    }
    map<Date,Transaction>::iterator it = transactions.begin();
    for(;it != transactions.end();it++)
        out += it->first + " - " + it->second + "\n";
    return out;
}

ostream& operator<<(ostream& ost, const Transaction_List& trans_list_two)
{
    // No use...
    ost << trans_list_two.to_string();
    return ost;
}

bool Transaction_List::delete_transaction_by_date(Date d)
{
    int result = transactions.erase(d);
    if(result == 1)
        return true;
    return false;
}

void Transaction_List::delete_transactions_by_name(string n)
{
    map<Date,Transaction>::iterator it = transactions.begin();
    for(;it != transactions.end(); it++)
        if(it->second.Transaction::get_name() == n)
            transactions.erase(it);
}
