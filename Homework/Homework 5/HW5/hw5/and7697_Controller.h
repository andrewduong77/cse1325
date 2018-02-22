

class Controller
{
public:
    Controller(Transaction_List& t, View& v)
    {

    }
    void cli();
    void execute_cmd(int cmd);
    void delete_event_by_date();
private:
    Transaction_List& transactions;
    View& view;
};
