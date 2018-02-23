#include "and7697_Transaction_List.h"

class View
{
public:
    View(Transaction_List& t) : transactions(t) {};
    string get_menu();
    string print_all_transactions();
    string prompt_for_date();
    string prompt_for_name();
    string prompt_for_price();
    string get_delete_transaction_menu();
    string print_try_again_message();
private:
    Transaction_List& transactions;
};
