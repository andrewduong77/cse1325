#include "and7697_View.h"

string View::get_menu()
{
    return R"(
=============================
Transaction Management System
=============================

(1) Browse Catalog
(2) Add
(3) Check in
(4) Check out
(5) Exit
_> )";
}

string View::print_try_again_message()
{
    return "Invalid selection. Try again!";
}
