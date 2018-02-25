#include "and7697_View.h"

string View::get_menu()
{
    return R"(
=============================
Transaction Management System
=============================

(1) Load transactions to file
(2) Save transactions to file
(3) Print all transactions
(4) Add a transaction
(5) Delete a transaction(s)
(6) Average transaction
(7) Bonus winner
(8) Exit
_> )";
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

string View::get_delete_transaction_menu()
{
    return R"(
What would you like to delete by?
(1) Date
(2) Name
(3) Cancel
_> )";
}

string View::print_try_again_message()
{
    return "Invalid selection. Try again!";
}
