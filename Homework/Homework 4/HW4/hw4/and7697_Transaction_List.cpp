#include "and7697_Transaction_List.h"

bool Transaction_List::add_transaction(Date date, Transaction transaction)
{
    return transactions.insert(make_pair(date,event)).second;
}

void Transaction_List::list_transactions()
{
    if(transactions.size() == 0)
    {
        cout << "nothing in transactions" << endl;
        return;
    }
    map<Date,string>::iterator it = transactions.begin();
    for(;it != planner.end();it++)
        cout << it->first << " - " << it->second << endl;
}

double Transaction_List::get_average_transaction()
{

}

string Transaction_List::bonus()
{

}

string Transaction_List::to_string() const
{

}

ostream& Transaction_List::operator<< (ostream& ost, const Transaction_List& trans_list_two)
{

}

void Transaction_List::delete_transaction_by_date(Date d)
{

}

void Transaction_List::delete_transactions_by_name(string n)
{

}
