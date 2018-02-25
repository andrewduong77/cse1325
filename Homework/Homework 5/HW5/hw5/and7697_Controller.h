#include "and7697_View.h"

class Controller
{
public:
    Controller(Transaction_List& t, View& v) : transactions(t), view(v) {};
    void cli();
    void execute_cmd(int cmd);
    void add_transaction();
    void delete_transaction();
private:
    Transaction_List& transactions;
    View& view;
};
