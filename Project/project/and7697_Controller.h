#include "and7697_View.h"
#include <fstream>

class Controller
{
public:
    Controller(Library& t, View& v) : library(t), view(v) {};
    void cli();
    void execute_cmd(int cmd);
    void cli_add();
    void execute_cmd_add(int cmd_add);
private:
    Library& library;
    View& view;
};
