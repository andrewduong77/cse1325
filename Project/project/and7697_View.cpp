#include "and7697_View.h"

string View::get_menu()
{
    return R"(
=============================
Transaction Management System
=============================

(1) Load transactions to file (Not working!)
(2) Save transactions to file (Not working!)
(3) Browse Catalog
(4) Add Media
(5) Delete Media
(9) Exit
_> )";
}

string View::print_try_again_message()
{
    return "Invalid selection. Try again!";
}
