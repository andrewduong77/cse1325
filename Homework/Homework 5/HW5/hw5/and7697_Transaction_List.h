#include "and7697_Date.h"
#include "and7697_Transaction.h"
#include <map>
#include <sstream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

class Transaction_List
{
    public:
        Transaction_List()
        {

        }
        bool add_transaction(Date date, Transaction transaction);
        void list_transactions();
        double get_average_transaction();
        string bonus();
        string to_string();
        friend ostream& operator<<(ostream& ost, const Transaction_List& trans_list_two);
        friend istream& operator>>(istream& ist, const Transaction_List& trans_list_two);
        bool delete_transaction_by_date(Date d);
        bool delete_transactions_by_name(string n);
        string to_lower_case(string s);
        char easy_to_lower(char a);
    private:
        map<Date, Transaction> transactions;
};
