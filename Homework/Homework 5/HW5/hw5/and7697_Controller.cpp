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
    Transaction transaction {0, ""};
    double avg;
    string the_bonus;
    switch(cmd)
    {
    case 1:
        cout << view.print_all_transactions();
        break;
    case 2:
        add_transaction();
        break;
    case 3:
        delete_transaction();
        break;
    case 4:
        avg = transactions.get_average_transaction();
        cout << endl << "The average transaction is " << avg << ".";
        break;
    case 5:
        the_bonus = transactions.bonus();
        cout << endl << "The bonus winner is " << the_bonus << ".";
        break;
    case 6:
        cout << endl << "Thank You!";
        break;
    default:
        cout << endl << view.print_try_again_message();
        break;
    }
}

void Controller::add_transaction()
{
    Date date {0, 0, 0, 0, 0, 0};
    Transaction transaction {0, ""};
    int year, month, day, hour, minute, second;
    double price;
    string name;
    cout << view.prompt_for_date();
    cin >> year >> month >> day >> hour >> minute >> second;
    date = {year, month, day, hour, minute, second};
    cout << view.prompt_for_price();
    cin >> price;
    cout << view.prompt_for_name();
    cin >> name;
    transaction = {price, name};
    if(transactions.add_transaction(date,transaction))
        cout << "transaction added" << endl;
    if(!transactions.add_transaction(date,transaction))
        cout << "transaction not added" << endl;
}

void Controller::delete_transaction()
{
    Date date {0, 0, 0, 0, 0, 0};
    int year, month, day, hour, minute, second;
    string name;
    cout << view.get_delete_transaction_menu();
    int cmd1;
    cin >> cmd1;
    while(cmd1 < 1 || cmd1 > 3)
    {
        cout << view.print_try_again_message();
        cout << view.get_delete_transaction_menu();
        cin >> cmd1;
    }
    if(cmd1 == 1)
    {
        cout << "Please enter a date to be deleted: ";
        cin >> year >> month >> day >> hour >> minute >> second;
        date = {year, month, day, hour, minute, second};
        transactions.delete_transaction_by_date(date);
    }
    else if(cmd1 == 2)
    {
        cout << "Please enter the name of the transaction(s) to be deleted: ";
        cin >> name;
        transactions.delete_transactions_by_name(name);
    }
}
