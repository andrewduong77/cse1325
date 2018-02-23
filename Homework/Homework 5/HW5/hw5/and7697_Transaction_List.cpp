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
    for(; it != transactions.end(); it++, count++)
        sum += (it->second).get_price();
    return sum / count;
}

string Transaction_List::bonus()
{
    map<string,double> people;
    map<Date,Transaction>::iterator itt = transactions.begin();
    for(; itt != transactions.end(); itt++)
    {
        bool exist = false;
        string name = itt->second.get_name();
        double total = itt->second.get_price();
        map<string,double>::iterator itp = people.begin();
        for(; itp != people.end(); itp++)
        {
            if(itp->first == name)
            {
                itp->second += total;
                exist = true;
            }
        }
        if(!exist)
            people.insert(make_pair(name, total)).second;
    }
    map<string,double>::iterator itp = people.begin();
    string name = itp->first;
    double max = itp->second;
    for(; itp != people.end(); itp++)
    {
        if(itp->second > max)
        {
            max = itp->second;
            name = itp->first;
        }
    }
    return name;
}

string Transaction_List::to_string()
{
    string out;
    ostringstream fmtStr;
    cout << endl;
    if(transactions.size() == 0)
    {
        out = "nothing in transactions\n";
        return out;
    }
    map<Date,Transaction>::iterator it = transactions.begin();
    for(;it != transactions.end();it++)
    {
//        fmtStr << it.first << " - " << fixed << setprecision(2) it.second << endl; // Doesn't work
//        out = fmtStr.str();
        out += it->first.to_string() + " - " + it->second.to_string() + "\n";
    }
    return out;
}

ostream& operator<<(ostream& ost, const Transaction_List& trans_list_two)
{
    if(trans_list_two.transactions.size() == 0)
    {
        ost << "no transactions" << endl;
        return ost;
    }
    for(pair<Date,Transaction> it : trans_list_two.transactions)
        ost << it.first << " - " << it.second << endl;
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
