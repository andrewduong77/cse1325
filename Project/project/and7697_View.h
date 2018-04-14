#include "and7697_Library.h"

class View
{
public:
    View(Library& l) : library(l) {};
    string get_menu();
    string get_add_menu();
    string get_add_media_menu();
    string print_try_again_message();
private:
    Library& library;
};
