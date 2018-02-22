

Class View
{
public:
    View(Transaction_List& t) : transactions(t) {};
    string get_menu();
    string view_all_events();
    string prompt_for_date();
    string prompt_for_event();
private:
    Transaction_List& transactions;
};
