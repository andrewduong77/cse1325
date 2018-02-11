#include "and7697_Transaction_List.h"
#include "and7697_Transaction_List.cpp"

int main()
{
    vector<Transaction_List> Transaction_Lists;
    char chose;
    do
    {
        cout << "Please enter the month: ";
        string month;
        cin >> month;
        Transaction_List transaction_list {month};
        double num = 0;
        string person;
        do
        {
            cout << "Please enter a transaction amount: ";
            cin >> num;
            if(num != -999)
            {
                cout << "Please enter the name of the person associated with this transaction (NO SPACES ' '): ";
                cin >> person;
                transaction_list.add_transaction(num, person);
            }
        }while(num != -999);
        Transaction_Lists.push_back(transaction_list);
        cout << "Would you like to add another transaction? (Y/N) ";
        cin >> chose;
        while(!(toupper(chose) == 'Y' || toupper(chose) == 'N'))
        {
            cout << "Invalid input. Please enter either Y or N: ";
            cin >> chose;
        }
        cout << "-------------------------" << endl;
    }while(toupper(chose) == 'Y');

    for(int i = 0; i < Transaction_Lists.size(); i++)
    {
        cout << "The month is " << Transaction_Lists[i].get_month() << "." << endl;
        if(Transaction_Lists[i].get_month() != "May")
        {
            cerr << "The month is incorrect." << endl;
        }
        cout << "The transaction average is " << Transaction_Lists[i].average_transaction() << "." << endl;
        if(Transaction_Lists[i].average_transaction() != 244.5475)
        {
            cerr << "The transaction average is incorrect." << endl;
        }
        cout << Transaction_Lists[i].bonus() << " gets the bonus." << endl;
        cout << "-------------------------" << endl;
    }

    return 0;
}
