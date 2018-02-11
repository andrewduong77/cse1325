#include "Transaction_List.h"
#include <iostream>

int main()
{
    
    vector<Transaction_List> transactions;
    char new_month = 'Y';
    cout << "Welcome to the Transaction List system." << endl;
    do{
        cout << "Starting process for adding a new month's worth of transactions." << endl;
        cout << "Input the month's name" << endl;
        string month;
        cin >> month;
        Transaction_List temp_trans(month);
        while(true)
        {
            cout << "Input a transaction (-999 to quit)" << endl;
            double temp_double;
            cin >> temp_double;
            if(temp_double == -999)
                break;
            temp_trans.add_transaction(temp_double);
        }
        transactions.push_back(temp_trans);
        cout << "Do you have another month's transactions to input? (Y/N)" << endl;
        cin >> new_month;
    }while(new_month == 'Y' || new_month == 'y');
    
    for(Transaction_List trans_list : transactions)
    cout << "The month of " << trans_list.get_month() << " had an average transaction of " << trans_list.average_transaction() << "." << endl;

    return 0;
}
