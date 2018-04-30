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

void Library::create_new_checked_out_media(Media* media)
{
    checked_out_list.push_back(media);
}

void Library::create_new_checked_out_bundle(Bundle* bundle)
{
    checked_out_bundle_list.push_back(bundle);
}

void Library::remove_checked_out_media(int id_number)
{
    for(int i = 0; i < checked_out_list.size(); i++)
    {
        if(id_number == (checked_out_list[i])->get_id_number())
        {
            checked_out_list.erase(checked_out_list.begin() + i);
        }
    }
}

void Library::remove_checked_out_bundle(string name)
{
    for(int i = 0; i < checked_out_bundle_list.size(); i++)
    {
        if(to_lower_case(name) == to_lower_case((checked_out_bundle_list[i])->get_name()))
        {
            checked_out_bundle_list.erase(checked_out_bundle_list.begin() + i);
        }
    }
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

vector<Bundle*> Library::get_checked_out_bundle_list()
{
    return this->checked_out_bundle_list;
}

string Library::print_medias_to_string()
{
    string out;
    ostringstream ost;
    for(Media* it : medias)
        ost << it->to_string();
    out = ost.str();
    return out;
}

string Library::print_transactions_to_string()
{
    string out;
    ostringstream ost;
    for(Transaction* it : transactions)
        // ost << "Does not work yet!" << endl;
        ost << it->to_string();
    out = ost.str();
    return out;
}

string Library::print_customers_to_string()
{
    string out;
    ostringstream ost;
    for(Customer* it : customers)
    {
        ost << endl;
        ost << it->to_string();
    }
    out = ost.str();
    return out;
}

string Library::print_librarians_to_string()
{
    string out;
    ostringstream ost;
    for(Librarian* it : librarians)
    {
        ost << endl;
        ost << it->to_string();
    }
    out = ost.str();
    return out;
}

string Library::print_bundles_to_string()
{
    string out;
    ostringstream ost;
    for(Bundle* it_bundle : bundles)
    {
        ost << "================" << endl << it_bundle->get_name() << " Bundle" << endl << "================" << endl << endl;
        for(Media* it_media : it_bundle->get_medias())
        {
            ost << "    == " << it_media->get_type() << " ==" << endl;
            ost << "        ID Number: " << it_media->get_id_number() << endl;
            ost << "        Title: " << it_media->get_title() << endl;
        }
        // ost << it_bundle->to_string();
    }
    out = ost.str();
    return out;
}

string Library::print_checked_out_list_to_string()
{
    string out;
    ostringstream ost;
    for(Media* it : checked_out_list)
        ost << it->to_string();
    out = ost.str();
    return out;
}

string Library::print_checked_out_bundle_list_to_string()
{
    string out;
    ostringstream ost;
    for(Bundle* it_bundle : checked_out_bundle_list)
    {
        ost << "================" << endl << it_bundle->get_name() << " Bundle" << endl << "================" << endl << endl;
        for(Media* it_media : it_bundle->get_medias())
        {
            ost << "    == " << it_media->get_type() << " ==" << endl;
            ost << "        ID Number: " << it_media->get_id_number() << endl;
            ost << "        Title: " << it_media->get_title() << endl;
        }
        // ost << it_bundle->to_string();
    }
    out = ost.str();
    return out;
}

void Library::print_medias()
{
    cout << R"(
==============
Browse Catalog
==============
    )";
    for(Media* it : medias)
        cout << it->to_string();
}

void Library::print_transactions()
{

}

void Library::print_customers()
{

}

void Library::print_librarians()
{
    
}

void Library::print_bundles()
{

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

void Library::print_checked_out_bundle_list()
{

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

istream& operator>>(istream& ist, Library& library_two)
{
    
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

string Library::to_lower_case(string s)
{
    for(int i = 0; i < s.size(); i++)
        s[i] = easy_to_lower(s[i]);
    return s;
}

char Library::easy_to_lower(char a)
{
    if(a <= 'Z' && a >= 'A')
        return a - ('Z' - 'z');
    return a;
}
