#include "View.h"

string View::get_menu(){

    string menu = R"(
=========================
Planner Management System
=========================

(1) View all events
(2) Add event
(3) Delete event by date
(0) Exit
)";
//    return menu;
    Dialogs::input(menu, "Main Menu");
}

string View::view_all_events()
{
    string header = R"(
+++++++++++++++++++++
All Events in Planner
+++++++++++++++++++++

)";

    return header;
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
