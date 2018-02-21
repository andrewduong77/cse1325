#include "Transaction_List.h"

void Transaction_List::add_transaction(Date d, Transaction t)
{
    transactions.insert(make_pair(d,t));
}

void Transaction_List::list_transaction()
{
    if(transactions.size() == 0)
    {
        cout << "no transactions" << endl;
        return;
    }
    map<Date,Transaction>::iterator it =  transactions.begin();
    for(;it != transactions.end();it++)
        cout << it->first << " - " << it->second << endl;
}

double Transaction_List::get_average_transaction()
{
    double average = 0.0;
    map<Date,Transaction>::iterator it = transactions.begin();
    for(;it != transactions.end(); it++)
        average += it->second.get_price();
    return average/transactions.size();
    
}

string Transaction_List::bonus()
{
    if(transactions.empty())
        return "No one";
    map<string, int> bonus_list;
    map<Date,Transaction>::iterator it = transactions.begin();
    for(;it != transactions.end(); it++)
    {
        if(bonus_list.count(it->second.get_name()) == 0)
            bonus_list.insert(make_pair(it->second.get_name(), 1));
        else
            bonus_list[it->second.get_name()] = bonus_list[it->second.get_name()] + 1;
    }
    
    int max = 0;
    string bonus_winner = "";
    
    map<string, int>::iterator itt = bonus_list.begin();
    for(;itt != bonus_list.end(); itt++)
    {
        if(itt->second > max)
        {
            max = itt->second;
            bonus_winner = itt->first;
        }
    }
        
    return bonus_winner;
}

string Transaction_List::to_string()
{
    if(transactions.size() == 0)
    {
        return "no transactions";
    }
    map<Date,Transaction>::iterator it =  transactions.begin();
    string returned = "";
    for(;it != transactions.end();it++)
        returned += it->first.to_string() + " - " + it->second.to_string() + "\n";
    return returned;
}

void Transaction_List::delete_transaction_by_date(Date d)
{
    transactions.erase(d);
}

void Transaction_List::delete_transactions_by_name(string n)
{
    
    map<Date,Transaction>::iterator it = transactions.begin();
    for(;it != transactions.end();)
    {
        if(it->second.get_name() == n)
        {
            transactions.erase(it->first);
            it = transactions.begin();
        }
        else
            it++;
    }
}

ostream& operator<<(ostream& ost, const Transaction_List& transactions_two)
{
    if(transactions_two.transactions.size() == 0)
    {
        ost << "no transactions" << endl;
        return ost;
    }
    for(pair<Date,Transaction> it : transactions_two.transactions)
        ost << it.first << " - " << it.second << endl;
    return ost;
}
