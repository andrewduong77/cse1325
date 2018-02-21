#include "Transaction_List.h"

void add_transaction(Transaction_List& transactions)
{
    cout << "Input a date (YYYY MM DD HH MM SS)" << endl;
    int y, m, d, h, min, s;
    cin >> y >> m >> d >> h >> min >> s;
    cin.ignore();
    Date date {y, m, d, h, min, s};
    
    cout << "Input transaction amount" << endl;
    double cost;
    cin >> cost;
    cin.ignore();
    
    cout << "Input employee name" << endl;
    string name;
    cin >> name;
    cin.ignore();
    
    Transaction transaction {cost, name};
    
    transactions.add_transaction(date, transaction);
}

void delete_transaction(Transaction_List& transactions)
{
    cout << "How would you like to delete" << endl;
    cout << "(1) By Date" << endl;
    cout << "(2) All by a certian employee" << endl;
    cout << "Any other number to Cancel" << endl;
    cout << "? ";
    
    int cmd = -1;
    cin >> cmd;
    cin.ignore();
    
    if(cmd == 1)
    {
        cout << "Input a date (YYYY MM DD HH MM SS)" << endl;
        int y, m, d, h, min, s;
        cin >> y >> m >> d >> h >> min >> s;
        cin.ignore();
        Date date {y, m, d, h, min, s};
        transactions.delete_transaction_by_date(date);
    }
    else if(cmd == 2)
    {
        cout << "Input employee name" << endl;
        string name = "";
        cin >> name;
        cin.ignore();
        transactions.delete_transactions_by_name(name); 
    }
}



int main(){

    Transaction_List transactions {};
    
    int cmd = -1;
    cout <<"Welcome to the Transaction List Management System" << endl;
    do{
        cout << "Please make a solution from the following menu" << endl;
        cout << "(1) Print all Transactions" << endl;
        cout << "(2) Add a Transaction" << endl;
        cout << "(3) Delete Transaction(s)" << endl;
        cout << "(4) Average Transaction value" << endl;
        cout << "(5) Bonus winner" << endl;
        cout << "(0) Exit" << endl;
        cout << "? ";
        
        cin >> cmd;
        cin.ignore();
        
        switch(cmd)
        {
            case 1:
                transactions.list_transaction();
                break;
            case 2:
                add_transaction(transactions);
                break;
            case 3:
                delete_transaction(transactions);
                break;
            case 4:
                cout << "Average Transaction is " << transactions.get_average_transaction() << endl;
                break;
            case 5:
                cout << "The Winner of the Bonus is " << transactions.bonus() << endl;
                break;
            case 0:
                cout << "Exiting" << endl;
                break;
            default:
                cout << "Invalid option";
        }
    
    }while(cmd != 0);

return 0;
}
