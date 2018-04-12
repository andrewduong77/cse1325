#include "and7697_View.h"
#include "and7697_Book.h"
#include "and7697_Movie.h"
#include "and7697_Video_Game.h"
#include "and7697_Music_Album.h"
#include "and7697_Television_Show_Season.h"
#include <fstream>

class Controller
{
public:
    Controller(Library& t, View& v) : library(t), view(v) {};
    void cli();
    void execute_cmd(int cmd);
    void cli_add();
    void execute_cmd_add(int cmd_add);
    void add_book();
    void add_movie();
private:
    Library& library;
    View& view;
};
