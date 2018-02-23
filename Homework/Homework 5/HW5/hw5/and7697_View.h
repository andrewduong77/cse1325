

Class View
{
public:
    View(Transaction_List& t) : transactions(t) {};
    string get_menu();
    string print_all_transcations();
    string prompt_for_date();
    string prompt_for_transaction();
private:
    Transaction_List& transactions;
};
