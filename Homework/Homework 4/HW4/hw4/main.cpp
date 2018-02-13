#include "and7697_Transaction_List.h"

int main()
{
    Transaction_List transactions {};
    Date d1 {2014,10,28,16,30,0};
    Transaction t1 {439.87,"iPhone_5s"};
    cout << a << end;
    if(transactions.add_transaction(d1, t1))
        cout << "Event added" << endl;
    if(!transactions.add_transaction(d1, t1))
        cout << "Event not added" << endl;
    return 0;
}
