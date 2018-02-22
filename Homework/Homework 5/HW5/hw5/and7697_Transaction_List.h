#include "and7697_Date.h"
#include "and7697_Transaction.h"
#include <map>

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
        bool delete_transaction_by_date(Date d);
        void delete_transactions_by_name(string n);
    private:
        map<Date, Transaction> transactions;
};