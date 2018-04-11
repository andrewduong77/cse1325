#include "and7697_View.h"
#include <fstream>

class Controller
{
public:
    Controller(Library& t, View& v) : library(t), view(v) {};
    void cli();
    void execute_cmd(int cmd);
    void add_transaction();
    void delete_transaction();
    void load_file();
    void save_file();
private:
    Library& library;
    View& view;
};
