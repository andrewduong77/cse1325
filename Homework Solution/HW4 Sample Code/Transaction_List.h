#include "Transaction.h"
#include <map>

class Transaction_List{

public:
    Transaction_List() {};
    void add_transaction(Date d, Transaction t);
    void list_transaction();
    double get_average_transaction();
    string bonus();
    string to_string();
    void delete_transaction_by_date(Date d);
    void delete_transactions_by_name(string n);
    friend ostream& operator<<(ostream& ost, const Transaction_List& transactions_two);
    
private:
    map<Date, Transaction> transactions;
};
