#include "and7697_Dialog.h"

Dialog::Dialog(Library& l) : library(l)
{
    set_title("Library Management System");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);
    Gtk::MenuItem *menuitem_save = Gtk::manage(new Gtk::MenuItem("_Save", true));
    menuitem_save->signal_activate().connect(sigc::mem_fun(*this, &Dialog::on_save_button_click));
    filemenu->append(*menuitem_save);
    Gtk::MenuItem *menuitem_load = Gtk::manage(new Gtk::MenuItem("_Load", true));
    menuitem_load->signal_activate().connect(sigc::mem_fun(*this, &Dialog::on_load_button_click));
    filemenu->append(*menuitem_load);
    Gtk::MenuItem *menuitem_exit = Gtk::manage(new Gtk::MenuItem("_Exit", true));
    menuitem_exit->signal_activate().connect(sigc::mem_fun(*this, &Dialog::on_exit_button_click));
    filemenu->append(*menuitem_exit);

    Gtk::Box *hbox1 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox1);

    Gtk::Box *vbox1 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    hbox1->add(*vbox1);

    Gtk::Grid *grid1 = Gtk::manage(new Gtk::Grid);
    grid1->set_border_width(10);
    vbox1->add(*grid1);

    Gtk::Label *label_main_menu = Gtk::manage(new Gtk::Label("Main Menu"));
    grid1->attach(*label_main_menu, 0, 0, 1, 1);

    Gtk::Button *button_browse_catalog = Gtk::manage(new Gtk::Button("Browse Catalog"));
    button_browse_catalog->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_browse_catalog_button_click));
    grid1->attach(*button_browse_catalog, 0, 1, 1, 1);

    Gtk::Button *button_view_checked_out_list = Gtk::manage(new Gtk::Button("View Checked Out List"));
    button_view_checked_out_list->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_view_checked_out_list_button_click));
    grid1->attach(*button_view_checked_out_list, 0, 2, 1, 1);

    Gtk::Button *add_button = Gtk::manage(new Gtk::Button("Add"));
    add_button->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_button_click));
    grid1->attach(*add_button, 0, 3, 1, 1);

    Gtk::Button *button_check_in = Gtk::manage(new Gtk::Button("Check in"));
    button_check_in->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_in_button_click));
    grid1->attach(*button_check_in, 0, 4, 1, 1);

    Gtk::Button *button_check_out = Gtk::manage(new Gtk::Button("Check out"));
    button_check_out->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_out_button_click));
    grid1->attach(*button_check_out, 0, 5, 1, 1);

    Gtk::Button *button_pay_balance = Gtk::manage(new Gtk::Button("Pay Balance"));
    button_pay_balance->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_pay_balance_button_click));
    grid1->attach(*button_pay_balance, 0, 6, 1, 1);

    Gtk::Button *button_save = Gtk::manage(new Gtk::Button("Save"));
    button_save->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_save_button_click));
    grid1->attach(*button_save, 0, 7, 1, 1);

    Gtk::Button *button_load = Gtk::manage(new Gtk::Button("Load"));
    button_load->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_load_button_click));
    grid1->attach(*button_load, 0, 8, 1, 1);

    /*
    Gtk::Box *vbox2 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    hbox1->add(*vbox2);

    Gtk::Grid *grid2 = Gtk::manage(new Gtk::Grid);
    grid2->set_border_width(10);
    vbox2->add(*grid2);

    Gtk::Label *label_add = Gtk::manage(new Gtk::Label("Add"));
    grid2->attach(*label_add, 0, 0, 1, 1);

    Gtk::Button *button_add_transaction = Gtk::manage(new Gtk::Button("Add Transaction"));
    button_add_transaction->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_transaction_button_click));
    grid2->attach(*button_add_transaction, 0, 2, 1, 1);

    Gtk::Button *button_add_customer = Gtk::manage(new Gtk::Button("Add Customer"));
    button_add_customer->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_customer_button_click));
    grid2->attach(*button_add_customer, 0, 3, 1, 1);

    Gtk::Button *button_add_librarian = Gtk::manage(new Gtk::Button("Add Librarian"));
    button_add_librarian->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_librarian_button_click));
    grid2->attach(*button_add_librarian, 0, 4, 1, 1);

    Gtk::Button *button_add_bundle = Gtk::manage(new Gtk::Button("Add Bundle"));
    button_add_bundle->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_bundle_click));
    grid2->attach(*button_add_bundle, 0, 5, 1, 1);

    Gtk::Box *vbox3 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    hbox1->add(*vbox3);

    Gtk::Grid *grid3 = Gtk::manage(new Gtk::Grid);
    grid3->set_border_width(10);
    vbox3->add(*grid3);

    Gtk::Label *label_add_media = Gtk::manage(new Gtk::Label("Add Media"));
    grid3->attach(*label_add_media, 0, 0, 1, 1);

    Gtk::Button *button_add_book = Gtk::manage(new Gtk::Button("Add Book"));
    button_add_book->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_book_button_click));
    grid3->attach(*button_add_book, 0, 1, 1, 1);

    Gtk::Button *button_add_movie = Gtk::manage(new Gtk::Button("Add Movie"));
    button_add_movie->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_movie_button_click));
    grid3->attach(*button_add_movie, 0, 2, 1, 1);

    Gtk::Button *button_add_video_game = Gtk::manage(new Gtk::Button("Add Video Game"));
    button_add_video_game->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_video_game_button_click));
    grid3->attach(*button_add_video_game, 0, 3, 1, 1);

    Gtk::Button *button_add_music_album = Gtk::manage(new Gtk::Button("Add Music Album"));
    button_add_music_album->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_music_album_button_click));
    grid3->attach(*button_add_music_album, 0, 4, 1, 1);

    Gtk::Button *button_add_television_show_season = Gtk::manage(new Gtk::Button("Add Television Show Season"));
    button_add_television_show_season->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_television_show_season_button_click));
    grid3->attach(*button_add_television_show_season, 0, 5, 1, 1);
    */

    /*
    Gtk::Box *hbox2 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox2);

    Gtk::Grid *grid4 = Gtk::manage(new Gtk::Grid);
    grid4->set_border_width(10);
    hbox2->add(*grid4);

    Gtk::Button *button_exit = Gtk::manage(new Gtk::Button("Exit"));
    button_exit->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_exit_button_click));
    button_exit->set_hexpand(true);
    grid4->attach(*button_exit, 0, 7, 1, 1);
    */

    vbox->show_all();
}

Dialog::~Dialog()
{
    //dtor
}

/*
***For Main Menu***
*/

void Dialog::on_browse_catalog_button_click()
{
    if(library.get_medias().size() <= 0)
        dialog("The catalog is empty.");
    else
    {
        dialog("Use the CLI interface to view the catalog.");
        library.print_medias();
    }
}

void Dialog::on_view_checked_out_list_button_click()
{
    if(library.get_checked_out_list().size() <= 0)
        dialog("The are nothing checked out.");
    else
    {
        dialog("Use the CLI interface to view the checked out list.");
        library.print_checked_out_list();
    }
}

void Dialog::on_add_button_click()
{
    Gtk::Window *window = new Gtk::Window();
    window->set_title("Add");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    window->add(*vbox);

    Gtk::Grid *grid = Gtk::manage(new Gtk::Grid);
    grid->set_border_width(10);
    vbox->add(*grid);

    Gtk::Label *label_add = Gtk::manage(new Gtk::Label("Add"));
    grid->attach(*label_add, 0, 0, 1, 1);

    Gtk::Button *button_add = Gtk::manage(new Gtk::Button("Add Media"));
    button_add->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_media_button_click));
    grid->attach(*button_add, 0, 2, 1, 1);

    Gtk::Button *button_add_transaction = Gtk::manage(new Gtk::Button("Add Transaction"));
    button_add_transaction->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_transaction_button_click));
    grid->attach(*button_add_transaction, 0, 2, 1, 1);

    Gtk::Button *button_add_customer = Gtk::manage(new Gtk::Button("Add Customer"));
    button_add_customer->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_customer_button_click));
    grid->attach(*button_add_customer, 0, 3, 1, 1);

    Gtk::Button *button_add_librarian = Gtk::manage(new Gtk::Button("Add Librarian"));
    button_add_librarian->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_librarian_button_click));
    grid->attach(*button_add_librarian, 0, 4, 1, 1);

    Gtk::Button *button_add_bundle = Gtk::manage(new Gtk::Button("Add Bundle"));
    button_add_bundle->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_bundle_button_click));
    grid->attach(*button_add_bundle, 0, 5, 1, 1);

    window->show_all();
}

void Dialog::on_check_in_button_click()
{
    dialog("Please the CLI interface to check in a media item.");
    cout << "Please input the id number of the media you would like to check in: " << endl;
    int id_number;
    cin >> id_number;
    for(Media* it : library.get_medias())
    {
        if(id_number == it->get_id_number())
        {
            if(it->is_checked_out() == false) // if is not checked out then display is checked in
            {
                cout << "Media is already checked in." << endl;
                dialog("Media is already checked in.");
                break;
            }
            else // if is checked out then call check_in()
            {
                it->check_in();
                library.remove_checked_out_media(id_number);
                cout << "Media checked in." << endl;
                dialog("Media checked in.");
                break;
            }
        }
    }
    cout << "Return to the main menu." << endl;
}

void Dialog::on_check_out_button_click()
{
    dialog("Please the CLI interface to check in a media item.");
    cout << "Please input the id number of the media you would like to check out: " << endl;
    int id_number;
    cin >> id_number;
    for(Media* it : library.get_medias())
    {
        if(id_number == it->get_id_number())
        {
            if(it->is_checked_out() == true) // if is checked out then display is checked out
            {
                cout << "Media is already checked out." << endl;
                dialog("Media is already checked out.");
                break;
            }
            else // if is not checked out then call check_out()
            {
                it->check_out();
                library.create_new_checked_out_media(it);
                cout << "Media checked out." << endl;
                dialog("Media checked out.");
                break;
            }
        }
    }
    cout << "Return to the main menu." << endl;
}

void Dialog::on_pay_balance_button_click()
{

}

void Dialog::on_save_button_click()
{
    dialog("Use the CLI interface to name the save file.");
    string file_name;
    cout << "Save filename: ";
    cin.ignore();
    getline(cin, file_name);
    // library.save(file_name);
    ofstream my_file(file_name);
    if(my_file.is_open())
    {
        if(my_file << library)
            dialog("File saved successfully.");
            // cout << endl << "File saved successfully.";
        else
            dialog("Unable to save file.");
            // cout << endl << "Unable to save file.";
    }
    else
        dialog("Unable to open file.");
        // cout << endl << "Unable to open file.";
    cout << "Return the main menu." << endl;
}

void Dialog::on_load_button_click()
{
    string file_name;
    cout << "Load filename: ";
    cin.ignore();
    getline(cin, file_name);
    library.load(file_name);
}

void Dialog::on_exit_button_click()
{
    dialog("Thank You!");
    hide();
}


void Dialog::dialog(Glib::ustring msg)
{
    Gtk::MessageDialog dlg(msg, false, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK, true);
    dlg.set_title("Librarian Management System");
    dlg.run();
}

/*
***For Add***
*/

void Dialog::on_add_media_button_click()
{
    Gtk::Window *window = new Gtk::Window();
    window->set_title("Add Media");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    window->add(*vbox);

    Gtk::Grid *grid = Gtk::manage(new Gtk::Grid);
    grid->set_border_width(10);
    vbox->add(*grid);

    Gtk::Label *label = Gtk::manage(new Gtk::Label("Add Media"));
    grid->attach(*label, 0, 0, 1, 1);
    
    Gtk::Button *button_add_book = Gtk::manage(new Gtk::Button("Add Book"));
    button_add_book->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_book_button_click));
    grid->attach(*button_add_book, 0, 1, 1, 1);
    
    Gtk::Button *button_add_movie = Gtk::manage(new Gtk::Button("Add Movie"));
    button_add_movie->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_movie_button_click));
    grid->attach(*button_add_movie, 0, 2, 1, 1);
    
    Gtk::Button *button_add_video_game = Gtk::manage(new Gtk::Button("Add Video Game"));
    button_add_video_game->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_video_game_button_click));
    grid->attach(*button_add_video_game, 0, 3, 1, 1);
    
    Gtk::Button *button_add_music_album = Gtk::manage(new Gtk::Button("Add Music Album"));
    button_add_music_album->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_music_album_button_click));
    grid->attach(*button_add_music_album, 0, 4, 1, 1);
    
    Gtk::Button *button_add_television_show_season = Gtk::manage(new Gtk::Button("Add Television Show Season"));
    button_add_television_show_season->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_television_show_season_button_click));
    grid->attach(*button_add_television_show_season, 0, 5, 1, 1);

    window->show_all();
}

void Dialog::on_add_transaction_button_click()
{
    
}

void Dialog::on_add_customer_button_click()
{
    dialog("Use the CLI interface to add a customer.");
    cout << "Adding a customer." << endl;
    string name;
    int id;
    int phone;
    string email;
    double balance;
    cout << "Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "ID: ";
    cin >> id;
    cout << "Phone: ";
    cin >> phone;
    cin.ignore();
    cout << "Email: ";
    getline(cin, email);
    cout << "Balance: ";
    cin >> balance;
    Customer* customer = new Customer(name, id, phone, email, balance);
    library.create_new_customer(customer);
    cout << "Done adding a customer. Go back to main menu." << endl;
}

void Dialog::on_add_librarian_button_click()
{
    dialog("Use the CLI interface to add a librarian.");
    cout << "Adding a librarian." << endl;
    string name;
    int id;
    cout << "Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "ID: ";
    cin >> id;
    Librarian* librarian = new Librarian(name, id);
    library.create_new_librarian(librarian);
    cout << "Done adding a librarian. Go back to main menu." << endl;
}

void Dialog::on_add_bundle_button_click()
{

}

/*
***For Add Media***
*/

// *Add Book*
void Dialog::on_add_book_button_click()
{
    window_add_book = new Gtk::Window();
    window_add_book->set_title("Add Book");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    window_add_book->add(*vbox);

    Gtk::Box *hbox_top = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_top);

    Gtk::Grid *grid1 = Gtk::manage(new Gtk::Grid);
    grid1->set_border_width(10);
    hbox_top->add(*grid1);

    // ***For ID Number***

    Gtk::Label *label_id_number = Gtk::manage(new Gtk::Label("ID Number:"));
    grid1->attach(*label_id_number, 0, 0, 1, 1);
    
    entry_id_number = Gtk::manage(new Gtk::Entry());
    entry_id_number->set_text("");
    entry_id_number->set_max_length(50);
    grid1->attach(*entry_id_number, 1, 0, 1, 1);

    // ***For Call Number***

    Gtk::Label *label_call_number = Gtk::manage(new Gtk::Label("Call Number:"));
    grid1->attach(*label_call_number, 0, 1, 1, 1);
    
    entry_call_number = Gtk::manage(new Gtk::Entry());
    entry_call_number->set_text("");
    entry_call_number->set_max_length(50);
    grid1->attach(*entry_call_number, 1, 1, 1, 1);

    // ***For Title***

    Gtk::Label *label_title = Gtk::manage(new Gtk::Label("Title:"));
    grid1->attach(*label_title, 0, 2, 1, 1);
    
    entry_title = Gtk::manage(new Gtk::Entry());
    entry_title->set_text("");
    entry_title->set_max_length(50);
    grid1->attach(*entry_title, 1, 2, 1, 1);

    // ***For Genre***

    Gtk::Label *label_genre = Gtk::manage(new Gtk::Label("Genre:"));
    grid1->attach(*label_genre, 0, 3, 1, 1);
    
    entry_genre = Gtk::manage(new Gtk::Entry());
    entry_genre->set_text("");
    entry_genre->set_max_length(50);
    grid1->attach(*entry_genre, 1, 3, 1, 1);

    // ***For Author***

    Gtk::Label *label_author = Gtk::manage(new Gtk::Label("Author:"));
    grid1->attach(*label_author, 0, 4, 1, 1);
    
    entry_author = Gtk::manage(new Gtk::Entry());
    entry_author->set_text("");
    entry_author->set_max_length(50);
    grid1->attach(*entry_author, 1, 4, 1, 1);

    // ***For Copyright Year***

    Gtk::Label *label_copyright_year = Gtk::manage(new Gtk::Label("Copyright Year:"));
    grid1->attach(*label_copyright_year, 0, 5, 1, 1);
    
    entry_copyright_year = Gtk::manage(new Gtk::Entry());
    entry_copyright_year->set_text("");
    entry_copyright_year->set_max_length(50);
    grid1->attach(*entry_copyright_year, 1, 5, 1, 1);

    Gtk::Box *hbox_bottom = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_bottom);

    Gtk::Grid *grid2 = Gtk::manage(new Gtk::Grid);
    grid2->set_border_width(10);
    hbox_bottom->add(*grid2);
    
    Gtk::Button *button_cancel = Gtk::manage(new Gtk::Button("Cancel"));
    button_cancel->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_book_cancel_button_click));
    grid2->attach(*button_cancel, 0, 0, 1, 1);
    
    Gtk::Button *button_ok = Gtk::manage(new Gtk::Button("OK"));
    button_ok->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_book_ok_button_click));
    grid2->attach(*button_ok, 1, 0, 1, 1);
   
    window_add_book->show_all();
}
void Dialog::on_add_book_ok_button_click()
{
    string id_number_str = entry_id_number->get_text();
    stringstream id_number_geek(id_number_str);
    int id_number;
    id_number_geek >> id_number;
    string call_number = entry_call_number->get_text();
    string title = entry_title->get_text();
    string genre = entry_genre->get_text();
    string author = entry_author->get_text();
    string copyright_year_str = entry_copyright_year->get_text();
    stringstream copyright_year_geek(copyright_year_str);
    int copyright_year;
    copyright_year_geek >> copyright_year;
    Book* book = new Book(id_number, call_number, title, genre, author, copyright_year);
    library.create_new_media(book);
    window_add_book->close();
    dialog(title + " added.");
    delete(window_add_book);
}
void Dialog::on_add_book_cancel_button_click()
{
    window_add_book->close();
}

// *Add Movie*
void Dialog::on_add_movie_button_click()
{
    window_add_movie = new Gtk::Window();
    window_add_movie->set_title("Add Movie");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    window_add_movie->add(*vbox);

    Gtk::Box *hbox_top = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_top);

    Gtk::Grid *grid1 = Gtk::manage(new Gtk::Grid);
    grid1->set_border_width(10);
    hbox_top->add(*grid1);

    // ***For ID Number***

    Gtk::Label *label_id_number = Gtk::manage(new Gtk::Label("ID Number:"));
    grid1->attach(*label_id_number, 0, 0, 1, 1);
    
    entry_id_number = Gtk::manage(new Gtk::Entry());
    entry_id_number->set_text("");
    entry_id_number->set_max_length(50);
    grid1->attach(*entry_id_number, 1, 0, 1, 1);

    // ***For Call Number***

    Gtk::Label *label_call_number = Gtk::manage(new Gtk::Label("Call Number:"));
    grid1->attach(*label_call_number, 0, 1, 1, 1);
    
    entry_call_number = Gtk::manage(new Gtk::Entry());
    entry_call_number->set_text("");
    entry_call_number->set_max_length(50);
    grid1->attach(*entry_call_number, 1, 1, 1, 1);

    // ***For Title***

    Gtk::Label *label_title = Gtk::manage(new Gtk::Label("Title:"));
    grid1->attach(*label_title, 0, 2, 1, 1);
    
    entry_title = Gtk::manage(new Gtk::Entry());
    entry_title->set_text("");
    entry_title->set_max_length(50);
    grid1->attach(*entry_title, 1, 2, 1, 1);

    // ***For Genre***

    Gtk::Label *label_genre = Gtk::manage(new Gtk::Label("Genre:"));
    grid1->attach(*label_genre, 0, 3, 1, 1);
    
    entry_genre = Gtk::manage(new Gtk::Entry());
    entry_genre->set_text("");
    entry_genre->set_max_length(50);
    grid1->attach(*entry_genre, 1, 3, 1, 1);

    // ***For Release Year***

    Gtk::Label *label_release_year = Gtk::manage(new Gtk::Label("Release Year:"));
    grid1->attach(*label_release_year, 0, 4, 1, 1);
    
    entry_release_year = Gtk::manage(new Gtk::Entry());
    entry_release_year->set_text("");
    entry_release_year->set_max_length(50);
    grid1->attach(*entry_release_year, 1, 4, 1, 1);

    // ***For Producer***

    Gtk::Label *label_producer = Gtk::manage(new Gtk::Label("Producer:"));
    grid1->attach(*label_producer, 0, 5, 1, 1);
    
    entry_producer = Gtk::manage(new Gtk::Entry());
    entry_producer->set_text("");
    entry_producer->set_max_length(50);
    grid1->attach(*entry_producer, 1, 5, 1, 1);

    // ***For Director***

    Gtk::Label *label_director = Gtk::manage(new Gtk::Label("Director:"));
    grid1->attach(*label_director, 0, 6, 1, 1);
    
    entry_director = Gtk::manage(new Gtk::Entry());
    entry_director->set_text("");
    entry_director->set_max_length(50);
    grid1->attach(*entry_director, 1, 6, 1, 1);

    // ***For Leading Actors***

    Gtk::Label *label_leading_actors = Gtk::manage(new Gtk::Label("Leading Actor(s):"));
    grid1->attach(*label_leading_actors, 0, 7, 1, 1);
    
    entry_leading_actor = Gtk::manage(new Gtk::Entry());
    entry_leading_actor->set_text("");
    entry_leading_actor->set_max_length(50);
    grid1->attach(*entry_leading_actor, 1, 7, 1, 1);
    
    Gtk::Button *button_add_leading_actor = Gtk::manage(new Gtk::Button("Add Leading Actor"));
    button_add_leading_actor->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_leading_actor_button_click));
    grid1->attach(*button_add_leading_actor, 2, 7, 1, 1);

    Gtk::Box *hbox_bottom = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_bottom);

    Gtk::Grid *grid2 = Gtk::manage(new Gtk::Grid);
    grid2->set_border_width(10);
    hbox_bottom->add(*grid2);
    
    Gtk::Button *button_cancel = Gtk::manage(new Gtk::Button("Cancel"));
    button_cancel->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_movie_cancel_button_click));
    grid2->attach(*button_cancel, 0, 0, 1, 1);
    
    Gtk::Button *button_ok = Gtk::manage(new Gtk::Button("OK"));
    button_ok->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_movie_ok_button_click));
    grid2->attach(*button_ok, 1, 0, 1, 1);
   
    window_add_movie->show_all();
}
void Dialog::on_add_movie_ok_button_click()
{
    string id_number_str = entry_id_number->get_text();
    stringstream id_number_geek(id_number_str);
    int id_number;
    id_number_geek >> id_number;
    string call_number = entry_call_number->get_text();
    string title = entry_title->get_text();
    string genre = entry_genre->get_text();
    string release_year_str = entry_release_year->get_text();
    stringstream release_year_geek(release_year_str);
    int release_year;
    release_year_geek >> release_year;
    string producer = entry_producer->get_text();
    string director = entry_director->get_text();
    Movie* movie = new Movie(id_number, call_number, title, genre, release_year, producer, director, leading_actors);
    library.create_new_media(movie);
    dialog(title + " added.");
    window_add_movie->close();
    delete(window_add_movie);
}
void Dialog::on_add_movie_cancel_button_click()
{
    window_add_movie->close();
}
void Dialog::on_add_leading_actor_button_click()
{
    string leading_actor = entry_leading_actor->get_text();
    leading_actors.push_back(leading_actor);
    entry_leading_actor->set_text("");
    dialog(leading_actor + " added.");
}

// *Add Video Game*
void Dialog::on_add_video_game_button_click()
{
    window_add_video_game = new Gtk::Window();
    window_add_video_game->set_title("Add Video Game");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    window_add_video_game->add(*vbox);

    Gtk::Box *hbox_top = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_top);

    Gtk::Grid *grid1 = Gtk::manage(new Gtk::Grid);
    grid1->set_border_width(10);
    hbox_top->add(*grid1);

    // ***For ID Number***

    Gtk::Label *label_id_number = Gtk::manage(new Gtk::Label("ID Number:"));
    grid1->attach(*label_id_number, 0, 0, 1, 1);
    
    entry_id_number = Gtk::manage(new Gtk::Entry());
    entry_id_number->set_text("");
    entry_id_number->set_max_length(50);
    grid1->attach(*entry_id_number, 1, 0, 1, 1);

    // ***For Call Number***

    Gtk::Label *label_call_number = Gtk::manage(new Gtk::Label("Call Number:"));
    grid1->attach(*label_call_number, 0, 1, 1, 1);
    
    entry_call_number = Gtk::manage(new Gtk::Entry());
    entry_call_number->set_text("");
    entry_call_number->set_max_length(50);
    grid1->attach(*entry_call_number, 1, 1, 1, 1);

    // ***For Title***

    Gtk::Label *label_title = Gtk::manage(new Gtk::Label("Title:"));
    grid1->attach(*label_title, 0, 2, 1, 1);
    
    entry_title = Gtk::manage(new Gtk::Entry());
    entry_title->set_text("");
    entry_title->set_max_length(50);
    grid1->attach(*entry_title, 1, 2, 1, 1);

    // ***For Genre***

    Gtk::Label *label_genre = Gtk::manage(new Gtk::Label("Genre:"));
    grid1->attach(*label_genre, 0, 3, 1, 1);
    
    entry_genre = Gtk::manage(new Gtk::Entry());
    entry_genre->set_text("");
    entry_genre->set_max_length(50);
    grid1->attach(*entry_genre, 1, 3, 1, 1);

    // ***For Release Year***

    Gtk::Label *label_release_year = Gtk::manage(new Gtk::Label("Release Year:"));
    grid1->attach(*label_release_year, 0, 4, 1, 1);
    
    entry_release_year = Gtk::manage(new Gtk::Entry());
    entry_release_year->set_text("");
    entry_release_year->set_max_length(50);
    grid1->attach(*entry_release_year, 1, 4, 1, 1);

    // ***For Studio***

    Gtk::Label *label_studio = Gtk::manage(new Gtk::Label("Studio:"));
    grid1->attach(*label_studio, 0, 5, 1, 1);
    
    entry_studio = Gtk::manage(new Gtk::Entry());
    entry_studio->set_text("");
    entry_studio->set_max_length(50);
    grid1->attach(*entry_studio, 1, 5, 1, 1);

    Gtk::Box *hbox_bottom = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_bottom);

    Gtk::Grid *grid2 = Gtk::manage(new Gtk::Grid);
    grid2->set_border_width(10);
    hbox_bottom->add(*grid2);
    
    Gtk::Button *button_cancel = Gtk::manage(new Gtk::Button("Cancel"));
    button_cancel->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_video_game_cancel_button_click));
    grid2->attach(*button_cancel, 0, 0, 1, 1);
    
    Gtk::Button *button_ok = Gtk::manage(new Gtk::Button("OK"));
    button_ok->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_video_game_ok_button_click));
    grid2->attach(*button_ok, 1, 0, 1, 1);
   
    window_add_video_game->show_all();
}
void Dialog::on_add_video_game_ok_button_click()
{
    string id_number_str = entry_id_number->get_text();
    stringstream id_number_geek(id_number_str);
    int id_number;
    id_number_geek >> id_number;
    string call_number = entry_call_number->get_text();
    string title = entry_title->get_text();
    string genre = entry_genre->get_text();
    string release_year_str = entry_release_year->get_text();
    stringstream release_year_geek(release_year_str);
    int release_year;
    release_year_geek >> release_year;
    string studio = entry_studio->get_text();
    Video_Game* video_game = new Video_Game(id_number, call_number, title, genre, release_year, studio);
    library.create_new_media(video_game);
    dialog(title + " added.");
    window_add_video_game->close();
    delete(window_add_video_game);
}
void Dialog::on_add_video_game_cancel_button_click()
{
    window_add_video_game->close();
}

// *Add Music Album*
void Dialog::on_add_music_album_button_click()
{
    window_add_music_album = new Gtk::Window();
    window_add_music_album->set_title("Add Music Album");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    window_add_music_album->add(*vbox);

    Gtk::Box *hbox_top = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_top);

    Gtk::Grid *grid1 = Gtk::manage(new Gtk::Grid);
    grid1->set_border_width(10);
    hbox_top->add(*grid1);

    // ***For ID Number***

    Gtk::Label *label_id_number = Gtk::manage(new Gtk::Label("ID Number:"));
    grid1->attach(*label_id_number, 0, 0, 1, 1);
    
    entry_id_number = Gtk::manage(new Gtk::Entry());
    entry_id_number->set_text("");
    entry_id_number->set_max_length(50);
    grid1->attach(*entry_id_number, 1, 0, 1, 1);

    // ***For Call Number***

    Gtk::Label *label_call_number = Gtk::manage(new Gtk::Label("Call Number:"));
    grid1->attach(*label_call_number, 0, 1, 1, 1);
    
    entry_call_number = Gtk::manage(new Gtk::Entry());
    entry_call_number->set_text("");
    entry_call_number->set_max_length(50);
    grid1->attach(*entry_call_number, 1, 1, 1, 1);

    // ***For Title***

    Gtk::Label *label_title = Gtk::manage(new Gtk::Label("Title:"));
    grid1->attach(*label_title, 0, 2, 1, 1);
    
    entry_title = Gtk::manage(new Gtk::Entry());
    entry_title->set_text("");
    entry_title->set_max_length(50);
    grid1->attach(*entry_title, 1, 2, 1, 1);

    // ***For Genre***

    Gtk::Label *label_genre = Gtk::manage(new Gtk::Label("Genre:"));
    grid1->attach(*label_genre, 0, 3, 1, 1);
    
    entry_genre = Gtk::manage(new Gtk::Entry());
    entry_genre->set_text("");
    entry_genre->set_max_length(50);
    grid1->attach(*entry_genre, 1, 3, 1, 1);

    // ***For Release Year***

    Gtk::Label *label_release_year = Gtk::manage(new Gtk::Label("Release Year:"));
    grid1->attach(*label_release_year, 0, 4, 1, 1);
    
    entry_release_year = Gtk::manage(new Gtk::Entry());
    entry_release_year->set_text("");
    entry_release_year->set_max_length(50);
    grid1->attach(*entry_release_year, 1, 4, 1, 1);

    // ***For Artist***

    Gtk::Label *label_artist = Gtk::manage(new Gtk::Label("Artist:"));
    grid1->attach(*label_artist, 0, 5, 1, 1);
    
    entry_artist = Gtk::manage(new Gtk::Entry());
    entry_artist->set_text("");
    entry_artist->set_max_length(50);
    grid1->attach(*entry_artist, 1, 5, 1, 1);

    // ***For Tracks***

    Gtk::Label *label_tracks = Gtk::manage(new Gtk::Label("Track(s):"));
    grid1->attach(*label_tracks, 0, 7, 1, 1);
    
    entry_track = Gtk::manage(new Gtk::Entry());
    entry_track->set_text("");
    entry_track->set_max_length(50);
    grid1->attach(*entry_track, 1, 7, 1, 1);
    
    Gtk::Button *button_add_track = Gtk::manage(new Gtk::Button("Add Track"));
    button_add_track->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_track_button_click));
    grid1->attach(*button_add_track, 2, 7, 1, 1);

    Gtk::Box *hbox_bottom = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_bottom);

    Gtk::Grid *grid2 = Gtk::manage(new Gtk::Grid);
    grid2->set_border_width(10);
    hbox_bottom->add(*grid2);
    
    Gtk::Button *button_cancel = Gtk::manage(new Gtk::Button("Cancel"));
    button_cancel->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_music_album_cancel_button_click));
    grid2->attach(*button_cancel, 0, 0, 1, 1);
    
    Gtk::Button *button_ok = Gtk::manage(new Gtk::Button("OK"));
    button_ok->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_music_album_ok_button_click));
    grid2->attach(*button_ok, 1, 0, 1, 1);
   
    window_add_music_album->show_all();
}
void Dialog::on_add_music_album_ok_button_click()
{
    string id_number_str = entry_id_number->get_text();
    stringstream id_number_geek(id_number_str);
    int id_number;
    id_number_geek >> id_number;
    string call_number = entry_call_number->get_text();
    string title = entry_title->get_text();
    string genre = entry_genre->get_text();
    string release_year_str = entry_release_year->get_text();
    stringstream release_year_geek(release_year_str);
    int release_year;
    release_year_geek >> release_year;
    string artist = entry_artist->get_text();
    Music_Album* music_album = new Music_Album(id_number, call_number, title, genre, release_year, artist, tracks);
    library.create_new_media(music_album);
    dialog(title + " added.");
    window_add_music_album->close();
    delete(window_add_music_album);

}
void Dialog::on_add_music_album_cancel_button_click()
{
    window_add_music_album->close();
}
void Dialog::on_add_track_button_click()
{
    string track = entry_track->get_text();
    tracks.push_back(track);
    entry_track->set_text("");
    dialog(track + " added.");
}

// *Add Television Show Season
void Dialog::on_add_television_show_season_button_click()
{
    window_add_television_show_season = new Gtk::Window();
    window_add_television_show_season->set_title("Add Television Show");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    window_add_television_show_season->add(*vbox);

    Gtk::Box *hbox_top = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_top);

    Gtk::Grid *grid1 = Gtk::manage(new Gtk::Grid);
    grid1->set_border_width(10);
    hbox_top->add(*grid1);

    // ***For ID Number***

    Gtk::Label *label_id_number = Gtk::manage(new Gtk::Label("ID Number:"));
    grid1->attach(*label_id_number, 0, 0, 1, 1);
    
    entry_id_number = Gtk::manage(new Gtk::Entry());
    entry_id_number->set_text("");
    entry_id_number->set_max_length(50);
    grid1->attach(*entry_id_number, 1, 0, 1, 1);

    // ***For Call Number***

    Gtk::Label *label_call_number = Gtk::manage(new Gtk::Label("Call Number:"));
    grid1->attach(*label_call_number, 0, 1, 1, 1);
    
    entry_call_number = Gtk::manage(new Gtk::Entry());
    entry_call_number->set_text("");
    entry_call_number->set_max_length(50);
    grid1->attach(*entry_call_number, 1, 1, 1, 1);

    // ***For Title***

    Gtk::Label *label_title = Gtk::manage(new Gtk::Label("Title:"));
    grid1->attach(*label_title, 0, 2, 1, 1);
    
    entry_title = Gtk::manage(new Gtk::Entry());
    entry_title->set_text("");
    entry_title->set_max_length(50);
    grid1->attach(*entry_title, 1, 2, 1, 1);

    // ***For Genre***

    Gtk::Label *label_genre = Gtk::manage(new Gtk::Label("Genre:"));
    grid1->attach(*label_genre, 0, 3, 1, 1);
    
    entry_genre = Gtk::manage(new Gtk::Entry());
    entry_genre->set_text("");
    entry_genre->set_max_length(50);
    grid1->attach(*entry_genre, 1, 3, 1, 1);

    // ***For Release Year***

    Gtk::Label *label_release_year = Gtk::manage(new Gtk::Label("Release Year:"));
    grid1->attach(*label_release_year, 0, 4, 1, 1);
    
    entry_release_year = Gtk::manage(new Gtk::Entry());
    entry_release_year->set_text("");
    entry_release_year->set_max_length(50);
    grid1->attach(*entry_release_year, 1, 4, 1, 1);

    // ***For Producer***

    Gtk::Label *label_producer = Gtk::manage(new Gtk::Label("Producer:"));
    grid1->attach(*label_producer, 0, 5, 1, 1);
    
    entry_producer = Gtk::manage(new Gtk::Entry());
    entry_producer->set_text("");
    entry_producer->set_max_length(50);
    grid1->attach(*entry_producer, 1, 5, 1, 1);

    // ***For Voice Actors***

    Gtk::Label *label_voice_actors = Gtk::manage(new Gtk::Label("Voice Actor(s):"));
    grid1->attach(*label_voice_actors, 0, 6, 1, 1);
    
    entry_voice_actor = Gtk::manage(new Gtk::Entry());
    entry_voice_actor->set_text("");
    entry_voice_actor->set_max_length(50);
    grid1->attach(*entry_voice_actor, 1, 6, 1, 1);
    
    Gtk::Button *button_add_voice_actor = Gtk::manage(new Gtk::Button("Add Voice Actor"));
    button_add_voice_actor->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_voice_actor_button_click));
    grid1->attach(*button_add_voice_actor, 2, 6, 1, 1);

    // ***For Composers***

    Gtk::Label *label_composers = Gtk::manage(new Gtk::Label("Composer(s):"));
    grid1->attach(*label_composers, 0, 7, 1, 1);
    
    entry_composer = Gtk::manage(new Gtk::Entry());
    entry_composer->set_text("");
    entry_composer->set_max_length(50);
    grid1->attach(*entry_composer, 1, 7, 1, 1);
    
    Gtk::Button *button_add_composer = Gtk::manage(new Gtk::Button("Add Composer"));
    button_add_composer->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_composer_button_click));
    grid1->attach(*button_add_composer, 2, 7, 1, 1);

    // ***For Season Number***

    Gtk::Label *label_season_number = Gtk::manage(new Gtk::Label("Season Number:"));
    grid1->attach(*label_season_number, 0, 8, 1, 1);
    
    entry_season_number = Gtk::manage(new Gtk::Entry());
    entry_season_number->set_text("");
    entry_season_number->set_max_length(50);
    grid1->attach(*entry_season_number, 1, 8, 1, 1);

    Gtk::Box *hbox_bottom = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox_bottom);

    Gtk::Grid *grid2 = Gtk::manage(new Gtk::Grid);
    grid2->set_border_width(10);
    hbox_bottom->add(*grid2);
    
    Gtk::Button *button_cancel = Gtk::manage(new Gtk::Button("Cancel"));
    button_cancel->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_television_show_season_cancel_button_click));
    grid2->attach(*button_cancel, 0, 0, 1, 1);
    
    Gtk::Button *button_ok = Gtk::manage(new Gtk::Button("OK"));
    button_ok->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_television_show_season_ok_button_click));
    grid2->attach(*button_ok, 1, 0, 1, 1);
   
    window_add_television_show_season->show_all();
}
void Dialog::on_add_television_show_season_ok_button_click()
{
    string id_number_str = entry_id_number->get_text();
    stringstream id_number_geek(id_number_str);
    int id_number;
    id_number_geek >> id_number;
    string call_number = entry_call_number->get_text();
    string title = entry_title->get_text();
    string genre = entry_genre->get_text();
    string release_year_str = entry_release_year->get_text();
    stringstream release_year_geek(release_year_str);
    int release_year;
    release_year_geek >> release_year;
    string producer = entry_producer->get_text();
    string season_number_str = entry_season_number->get_text();
    stringstream season_number_geek(season_number_str);
    int season_number;
    season_number_geek >> season_number;
    Television_Show_Season* television_show_season = new Television_Show_Season(id_number, call_number, title, genre, release_year, producer, voice_actors, composers, season_number);
    library.create_new_media(television_show_season);
    dialog(title + " added.");
    window_add_television_show_season->close();
    delete(window_add_television_show_season);
}
void Dialog::on_add_television_show_season_cancel_button_click()
{
    window_add_television_show_season->close();
}
void Dialog::on_add_voice_actor_button_click()
{
    string voice_actor = entry_voice_actor->get_text();
    voice_actors.push_back(voice_actor);
    entry_voice_actor->set_text("");
    dialog(voice_actor + " added.");
}
void Dialog::on_add_composer_button_click()
{
    string composer = entry_composer->get_text();
    composers.push_back(composer);
    entry_composer->set_text("");
    dialog(composer + " added.");
}
