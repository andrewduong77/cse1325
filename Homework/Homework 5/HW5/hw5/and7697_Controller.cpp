#include "and7697_Controller.h"

void Controller::cli()
{
    int cmd = -1;
    while(cmd != 6)
    {
        cout << view.get_menu();
        cin >> cmd;
        execute_cmd(cmd);
        cout << endl;
    }
}

void Controller::execute_cmd(int cmd)
{
    int year, month, day, hour, min, second;
    Date date {0, 0, 0, 0, 0, 0};
    double price;
    string name;
    Transaction transaction {0, ""};
    double avg;
    string the_bonus;
    switch(cmd)
    {
    case 1:
//        transactions.list_transactions();
        cout << transactions.to_string(); // Does not work!
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
        cout << "--> ";
        int cmd1;
        cin >> cmd1;
        while(cmd1 < 1 && cmd1 > 2)
        {
            cout << "Invalid selection. Try Again: " << endl;
            cout << "What would you like to delete by?" << endl;
            cout << "1 Date" << endl;
            cout << "2 Name" << endl;
            cout << "--> ";
            cin >> cmd1;
        }
        if(cmd1 == 1)
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
        cout << "The average transaction is " << avg << "." << endl;
        break;
    case 5:
        the_bonus = transactions.bonus();
        cout << "The bonus winner is " << the_bonus << "." << endl;
        break;
    case 6:
        cout << "Thank You!" << endl;
        break;
    default:
        cout << "Invalid selection. Try again!" << endl;
        break;
    }
}

void Controller::delete_transaction()
{

}
