#include "and7697_Transaction_List.h"

class View
{
public:
    View(Transaction_List& t) : transactions(t) {};
    string get_menu();
    string print_all_transactions();
    string prompt_for_date();
    string prompt_for_transaction();
private:
    Transaction_List& transactions;
};
