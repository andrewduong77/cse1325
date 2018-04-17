#include "View.h"

int View::get_menu(){

    string menu = R"(
=========================
Planner Management System
=========================

(1) View all events
(2) Add event
(3) Delete event by date
(0) Exit
)";
    //return menu;
    
    string result = Dialogs::input(menu, "Main Menu");
    int return_int = stoi(result);
    return return_int;
}

void View::view_all_events()
{
    string msg = R"(
+++++++++++++++++++++
All Events in Planner
+++++++++++++++++++++

)";

    msg += planner.get_all_events();
    Dialogs::message(msg, "All Events");
    //return header;
}

string View::prompt_for_date()
{
    string prompt = "Input a date (YYYY MM DD HH MM SS)";
    return prompt;
}

string View::prompt_for_event()
{
    string prompt = "Input an event name";
    return prompt;
}
