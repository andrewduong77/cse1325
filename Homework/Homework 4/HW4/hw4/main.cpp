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
    cout << "6: Exit" << endl;
    Transaction_List transactions {};
    int select;
    cin >> select;
    while(select != 6)
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
            break;
        case 3:
            cout << "What would you like to delete by?" << endl;
            cout << "1 Date" << endl;
            cout << "2 Name" << endl;
            int select1;
            cin >> select1;
            while(select1 < 1 && select1 > 2)
            {
                cout << "Invalid selection. Try Again: " << endl;
                cout << "What would you like to delete by?" << endl;
                cout << "1 Date" >> endl;
                cout << "2 Name" >> endl;
                cin >> select1;
            }
            if(select1 == 1)
            {
                cout << "Please enter a date to be deleted: ";
                int year1, month1, day1, hour1, min1, second1;
                cin >> year1;
                cin >> month1;
                cin >> day1;
                cin >> hour1;
                cin >> min1;
                cin >> second1;
                Date date1 {year1, month1, day1, hour1, min1, second1};
                transactions.delete_transaction_by_date(date1)
            }
            else
            {
                cout << "Please enter the name of the transaction(s) to be deleted: ";
                string name1;
                cin >> name1;
                transactions.delete_transactions_by_name(name1);
            }
            break;
        case 4:
            double avg = transactions.get_average_transaction();
            cout << "The average transaction is " + avg + "." << endl;
            break;
        case 5:
            string the_bonus = transactions.bonus();
            cout << "The bonus winner is " + the_bonus + "." << endl;
            break;
        case 6:
            break;
        default:
            cout << "Invalid selection. Try again!" << endl;
        }
    }
}