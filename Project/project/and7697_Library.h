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
    void create_new_checked_out_media(Media* media);
    void remove_checked_out_media(int call_number);
    vector<Media*> get_medias();
    vector<Bundle*> get_bundles();
    vector<Librarian*> get_librarians();
    vector<Customer*> get_customers();
    vector<Transaction*> get_transactions();
    vector<Media*> get_checked_out_list();
    string print_medias_to_string();
    string print_checked_out_list_to_string();
    void print_medias();
    void print_checked_out_list();
//    string to_string() const;
    friend ostream& operator<<(ostream& ost, const Library& library_two);
    friend istream& operator>>(istream& ist, Library& library_two);
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
