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

void Library::to_string() const
{
//    string out;
//    ostringstream ost;
//    ost << "==Media==" << endl;
//    if(media.size() == 0)
//        ost << "Is Empty" << endl;
//    else
//    {
//        for(Media* it : medias)
//        {
//            if(it->get_type() == "Book")
//            {
//                ;
//            }
//        }
//    }
}

void Library::save(string file_name)
{
//    ostream my_file(file_name);
//    if(my_file.is_open())
//    {
//        if(my_file << library.to_string())
//            cout << endl << "File saved successfully.";
//        else
//            cout << endl << "Unable to save file.";
//    }
//    else
//        cout << endl << "Unable to open file.";
}

void Library::load(string file_name)
{

}
