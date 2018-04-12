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

void Library::save(string file_name)
{

}

void Library::load(string file_name)
{

}
