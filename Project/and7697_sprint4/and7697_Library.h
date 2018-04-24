#ifndef AND7697_LIBRARY_H_INCLUDED
#define AND7697_LIBRARY_H_INCLUDED

#include <fstream>

#include "and7697_Bundle.h"
#include "and7697_Media.h"
#include "and7697_Transaction.h"
#include "and7697_Librarian.h"
#include "and7697_Customer.h"

class Library
{
public:
    void create_new_media(Media* media);
    void create_new_bundle(Bundle* bundle);
    void create_new_librarian(Librarian* librarian);
    void create_new_customer(Customer* customer);
    void create_new_transaction(Transaction* transaction);
    vector<Media*> get_medias();
    vector<Bundle*> get_bundles();
    vector<Librarian*> get_librarians();
    vector<Customer*> get_customers();
    vector<Transaction*> get_transactions();
    vector<Media*> get_checked_out_list();
    void print_medias();
//    string to_string() const;
    friend ostream& operator<<(ostream& ost, const Library& library_two);
    void save(string file_name);
    void load(string file_name);
private:
    vector<Media*> medias;
    vector<Transaction*> transactions;
    vector<Customer*> customers;
    vector<Librarian*> librarians;
    vector<Bundle*> bundles;
    vector<Media*> checked_out_list;
};

#endif // AND7697_LIBRARY_H_INCLUDED
