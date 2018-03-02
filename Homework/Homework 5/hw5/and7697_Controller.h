#include "and7697_View.h"
#include <fstream>

class Controller
{
public:
    Controller(Transaction_List& t, View& v) : transactions(t), view(v) {};
    void cli();
    void execute_cmd(int cmd);
    void add_transaction();
    void delete_transaction();
    void load_file();
    void save_file();
private:
    Transaction_List& transactions;
    View& view;
};
