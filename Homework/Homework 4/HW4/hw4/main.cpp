//#include "and7697_Transaction_List.h"
//
//int main()
//{
//    Transaction_List transactions {};
//    Date d1 {2014,10,28,16,30,0};
//    Transaction t1 {439.87,"iPhone_5s"};
//    cout << a << end;
//    if(transactions.add_transaction(d1, t1))
//        cout << "Event added" << endl;
//    if(!transactions.add_transaction(d1, t1))
//        cout << "Event not added" << endl;
//    return 0;
//}

#include "and7697_Transaction_List.h"
//#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to the Transaction List Management Solution." << endl;
    cout << "Please make a selection from the following menu:" << endl;
    cout << "1: Print all transactions" << endl;
    cout << "2: Add a transaction" << endl;
    cout << "3: Delete a transaction(s)" << endl;
    cout << "4: Average transaction value" << endl;
    cout << "5: Bonus winner" << endl;
    cout << "? |" << endl;
    Transaction_List transactions {};
    int select;
    cin >> select;
    while(select < 1 && select > 5)
    {
        switch(select)
        {
        case 1:
            transactions.list_transactions();
            break;
        case 2:
            cout << "Please enter a date: ";
            int year;
            cin >> year;
            int month;
            cin >> month;
            int day;
            cin >> day;
            int hour;
            cin >> hour;
            int minute;
            cin >> minute;
            int second;
            cin >> second;
            Date date {year, month, day, hour, minute, second};
            cout << "Please enter a price: ";
            double price;
            cin >> price;
            cout << "Please enter a name: ";
            string name;
            cin >> name;
            Transaction transaction {price, name};
            if(transactions.add_transaction(date,transaction))
                cout << "transaction added" << endl;
            if(!transactions.add_transaction(date,transaction))
                cout << "transaction not added" << endl;
        }
    }
}
