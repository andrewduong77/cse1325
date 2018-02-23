#include "and7697_View.h"

string View::get_menu()
{
    string menu = R"(
=============================
Transaction Management System
=============================

(1) Print all transactions
(2) Add a transaction
(3) Delete a transaction(s)
(4) Average transaction
(5) Bonus winner
(6) Exit
_> )";
return menu;
}

string View::print_all_transactions()
{
    return transactions.to_string();
}

string View::prompt_for_date()
{
    return "Please enter a date: ";
}

string View::prompt_for_name()
{
    return "Please enter a name: ";
}

string View::prompt_for_price()
{
    return "Please enter a price: ";
}
