#include "and7697_Controller.h"

void Controller::cli()
{
    int cmd = -1;
    while(cmd != 8)
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
        load_file();
        break;
    case 2:
        save_file();
        break;
    case 3: // print all transactions
        cout << view.print_all_transactions();
        break;
    case 4: // add a transaction
        add_transaction();
        break;
    case 5: // delete a transaction
        delete_transaction();
        break;
    case 6: // get average transaction
        avg = transactions.get_average_transaction();
        cout << endl << "The average transaction is " << avg << ".";
        break;
    case 7: // get the bonus winner
        the_bonus = transactions.bonus();
        cout << endl << "The bonus winner is " << the_bonus << ".";
        break;
    case 8: // exit
        cout << endl << "Thank You!";
        break;
    default: // invalid input
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
        if(transactions.delete_transaction_by_date(date))
            cout << endl << "Transaction with date " << date << " deleted.";
        else
            cout << endl << "No transactions match the given date.";
    }
    else if(cmd1 == 2)
    {
        cout << "Please enter the name of the transaction(s) to be deleted: ";
        cin >> name;
        if(transactions.delete_transactions_by_name(name))
            cout << endl << "Transaction(s) with name \"" << name << "\" deleted.";
        else
            cout << endl << "No transactions match the given name.";
    }
}

void Controller::load_file()
{
    string file = "and7697_save_file.txt";
    ifstream my_file(file);
    string line;
    string name;
    double price;
    int year, month, day, hour, minute, second;
    Date date {0, 0, 0, 0, 0, 0};
    char ignore;
    Transaction transaction {0, ""};
    while(my_file)
    {
        my_file >> year >> month >> day >> hour >> minute >> second;
        date = {year, month, day, hour, minute, second};
        my_file >> ignore;
        my_file >> name;
        my_file >> price;
        transaction = {price, name};
        transactions.add_transaction(date, transaction);
    }
}

void Controller::save_file()
{
    string file = "and7697_save_file.txt";
    ofstream my_file(file);
    if(my_file.is_open())
    {
        my_file << transactions.to_string();
        cout << "File saved successfully." << endl;
    }
    else
        cout << "Unable to save file." << endl;
}
