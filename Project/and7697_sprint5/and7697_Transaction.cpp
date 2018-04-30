#include "and7697_Transaction.h"

double Transaction::calculate_fee()
{

}

string Transaction::to_string() const
{
    string out;
    ostringstream ost;
    ost << R"(
== Transaction ==
              )" << endl;
    ost << "   ERROR: to_string on transaction doesn't wanna work, it's too messy and retarded... Inheritance can be one pain in the n**! >:(" << endl;
    // ost << "    Transaction Number: " << this->transaction_number << endl;
    // ost << "    Check Out Date: " << this->check_out_date.get_month() << " " << this->check_out_date.get_day() << " " << this->check_out_date.get_year() << endl;
    // ost << "    Librarian: " << this->librarian.get_name() << endl;
    // ost << "    Customer: " << this->customer.get_name() << endl;
    // ost << "    Media(s): " << endl;
    // for(Media* it : media)
    //     ost << "        ID Number: " << it->get_id_number() << " Title: " << it->get_title() << endl;
    // ost << "    Bundle(s): " << endl;
    // for(Bundle* it : bundle)
    //     ost << "        " << it->get_name() << endl;
    // ost << "    Check In Date: " << this->check_in_date.get_month() << " " << this->check_in_date.get_day() << " " << this->check_in_date.get_year() << endl;
    // ost << "    Due Date: " << this->due_date.get_month(); << " " << this->due_date.get_day() << " " << this->due_date.get_year() << endl;
    out = ost.str();
    return out;
}

string Transaction::to_file() const
{
    string out;
    ostringstream ost;
    // ost << this->type << ";"
    //     << this->id_number << ";"
    //     << this->call_number << ";"
    //     << this->title << ";"
    //     << this->genre << ";"
    //     << this->author << ";"
    //     << this->copyright_year << endl;
    out = ost.str();
    return out;
}
