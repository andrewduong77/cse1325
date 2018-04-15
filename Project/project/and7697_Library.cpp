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

void Library::print_medias()
{
    for(Media* it : medias)
        cout << it->to_string();
}

// to string does not work
//void Library::to_string() const
//{
//    string out;
//    ostringstream ost;
//    ost << "==Media==" << endl;
//    if(medias.size() == 0)
//        ost << "Is Empty" << endl;
//    else
//    {
//        for(Media* it : medias)
//        {
//            ost << it->to_string_file();
//        }
//    }
//}

ostream& operator<<(ostream& ost, const Library& library_two)
{
    string out;
    ost << "==Media==" << endl;
    if(library_two.medias.size() == 0)
        ost << "Is Empty" << endl;
    else
    {
        for(Media* it : library_two.medias)
        {
            ost << it->to_string_file();
        }
    }
}

void Library::save(string file_name)
{
    ofstream my_file(file_name);
    if(my_file.is_open())
    {
        if(my_file << this)
            cout << endl << "File saved successfully.";
        else
            cout << endl << "Unable to save file.";
    }
    else
        cout << endl << "Unable to open file.";
}

void Library::load(string file_name)
{

}
