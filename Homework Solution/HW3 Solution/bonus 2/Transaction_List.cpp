#include "Transaction_List.h"

Transaction_List::Transaction_List(string m)
{
    month = m;
}

string Transaction_List::get_month()
{
    return month;
}

void Transaction_List::add_transaction(double transaction, string name)
{
    transactions.push_back(transaction);
    person.push_back(name);
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

string Transaction_List::bonus()
{
    if(person.empty())
        return "No one";
    if(person.size() == 1)
        return person[0];
    
    vector<int> count {1};
    vector<string> sorted_person = person; 
    sort(sorted_person.begin(), sorted_person.end());
    int highest_index = 0;
    
    for (int i = 1; i < sorted_person.size(); i++)
    {
        if(sorted_person[i] == sorted_person[i-1])
        {
            count.push_back(count[i-1] + 1);
            if(count[i] > count [highest_index])
                highest_index = i;
        }
        else
            count.push_back(1);
    }
    
    return sorted_person[highest_index];
}
