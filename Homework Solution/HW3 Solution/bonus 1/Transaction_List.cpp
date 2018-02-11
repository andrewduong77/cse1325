#include "Transaction_List.h"

Transaction_List::Transaction_List(string m)
{
    month = m;
}

string Transaction_List::get_month()
{
    return month;
}

void Transaction_List::add_transaction(double transaction)
{
    transactions.push_back(transaction);
}

double Transaction_List::average_transaction()
{
    double average = 0.0;
    if(transactions.size() == 0)
        return average;
    for (double transaction : transactions)
        average += transaction;
    return average / transactions.size();
}
