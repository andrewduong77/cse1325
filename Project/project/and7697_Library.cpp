#include "and7697_Library.h"

void Library::create_new_media(Media* media)
{
    medias.push_back(media);
}

void Library::create_new_bundle(Bundle* bundle)
{
    bundles.push_back(bundle);
}

void Library::create_new_librarian(Librarian* librarian)
{
    librarians.push_back(librarian);
}

void Library::create_new_customer(Customer* customer)
{
    customers.push_back(customer);
}

void Library::create_new_transaction(Transaction* transaction)
{
    transactions.push_back(transaction);
}

vector<Media*> Library::get_medias()
{
    return medias;
}

vector<Bundle*> Library::get_bundles()
{
    return bundles;
}

vector<Librarian*> Library::get_librarians()
{
    return librarians;
}

vector<Customer*> Library::get_customers()
{
    return customers;
}

vector<Transaction*> Library::get_transactions()
{
    return transactions;
}

vector<Media*> Library::get_checked_out_list()
{
    return this->checked_out_list;
}

void Library::print_medias()
{
    for(Media* it : medias)
        cout << it->to_string();
}

void Library::print_checked_out_list()
{
    cout << R"(
===========
Checked Out
===========
    )";
    for(Media* it : checked_out_list)
        cout << it->to_string();
}

/*
string Library::to_string() const
{
   string out;
   ostringstream ost;
   if(medias.size() > 0)
   {
       ost << "Medias" << endl;
       for(Media* it : medias)
           ost << it->to_string_file() << endl;
   }
   if(transactions.size() > 0)
   {
       ost << "Transactions" << endl;
   }
   out = ost.str();
   return out;
}
*/

ostream& operator<<(ostream& ost, const Library& library_two)
{
    if(library_two.medias.size() > 0)
    {
        ost << "Medias" << endl;
        for(Media* it : library_two.medias)
            ost << it->to_string_file();
    }
    if(library_two.customers.size() > 0)
    {
        ost << "Customers" << endl;
        for(Customer* it : library_two.customers)
            ost << it->to_string_file();
    }
    if(library_two.librarians.size() > 0)
    {
        ost << "Librarians" << endl;
        for(Librarian* it : library_two.librarians)
            ost << it->to_string_file();
    }
    return ost;
}

void Library::save(string file_name)
{
    /*
    ofstream my_file(file_name);
    if(my_file.is_open())
    {
        if(my_file << to_string())
            cout << endl << "File saved successfully.";
        else
            cout << endl << "Unable to save file.";
    }
    else
        cout << endl << "Unable to open file.";
    */
}

void Library::load(string file_name)
{

}
