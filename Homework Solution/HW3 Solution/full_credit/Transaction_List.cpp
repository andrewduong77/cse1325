#include "Transaction_List.h"

Transaction_List::Transaction_List(string m)
{
    month = m;
    num_transactions = 0;
   
}

string Transaction_List::get_month()
{
    return month;
}

void Transaction_List::add_transaction(double transaction)
{
    transactions.push_back(transaction);
    num_transactions++;
}

double Transaction_List::average_transaction()
{
    double average = 0.0;
    if(num_transactions == 0)
        return average;
    for (double transaction : transactions)
        average += transaction;
    return average / num_transactions;
}
