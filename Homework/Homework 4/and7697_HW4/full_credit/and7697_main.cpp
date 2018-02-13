#include "and7697_Transaction_List.h"

using namespace std;

int main()
{
    cout << "Welcome to the Transaction List Management Solution." << endl;
    Transaction_List transactions {};
    int select, select1;
    int year, month, day, hour, min, second;
    Date date {0, 0, 0, 0, 0, 0};
    double price;
    string name;
    Transaction transaction {0, ""};
    double avg;
    string the_bonus;
    do
    {
        cout << "Please make a selection from the following menu:" << endl;
        cout << "1: Print all transactions" << endl;
        cout << "2: Add a transaction" << endl;
        cout << "3: Delete a transaction(s)" << endl;
        cout << "4: Average transaction value" << endl;
        cout << "5: Bonus winner" << endl;
        cout << "6: Exit" << endl;
        cout << "--> ";
        cin >> select;
        switch(select)
        {
        case 1:
            transactions.list_transactions();
            break;
        case 2:
            cout << "Please enter a date: ";
            cin >> year;
            cin >> month;
            cin >> day;
            cin >> hour;
            cin >> min;
            cin >> second;
            date = {year, month, day, hour, min, second};
            cout << "Please enter a price: ";
            cin >> price;
            cout << "Please enter a name: ";
            cin >> name;
            transaction = {price, name};
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
                cout << "1 Date" << endl;
                cout << "2 Name" << endl;
                cin >> select1;
            }
            if(select1 == 1)
            {
                cout << "Please enter a date to be deleted: ";
                cin >> year;
                cin >> month;
                cin >> day;
                cin >> hour;
                cin >> min;
                cin >> second;
                date = {year, month, day, hour, min, second};
                transactions.delete_transaction_by_date(date);
            }
            else
            {
                cout << "Please enter the name of the transaction(s) to be deleted: ";
                cin >> name;
                transactions.delete_transactions_by_name(name);
            }
            break;
        case 4:
            avg = transactions.get_average_transaction();
            cout << "The average transaction is " + std::to_string(avg) + "." << endl;
            break;
        case 5:
            the_bonus = transactions.bonus();
            cout << "The bonus winner is " + the_bonus + "." << endl;
            break;
        case 6:
            cout << "Thank You!" << endl;
            break;
        default:
            cout << "Invalid selection. Try again!" << endl;
            break;
        }
    }while(select != 6);
}

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
