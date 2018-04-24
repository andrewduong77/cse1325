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
    Gtk::MenuItem *menuitem_exit = Gtk::manage(new Gtk::MenuItem("_Exit", true));
    menuitem_exit->signal_activate().connect(sigc::mem_fun(*this, &Dialog::on_exit_button_click));
    filemenu->append(*menuitem_exit);
    Gtk::MenuItem *menuitem_save = Gtk::manage(new Gtk::MenuItem("_Save", true));
    menuitem_save->signal_activate().connect(sigc::mem_fun(*this, &Dialog::on_save_button_click));
    Gtk::MenuItem *menuitem_load = Gtk::manage(new Gtk::MenuItem("_Save", true));
    menuitem_load->signal_activate().connect(sigc::mem_fun(*this, &Dialog::on_load_button_click));

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

    Gtk::Button *add_button = Gtk::manage(new Gtk::Button("Add"));
    add_button->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_button_click));
    grid1->attach(*add_button, 0, 2, 1, 1);

    Gtk::Button *button_check_in = Gtk::manage(new Gtk::Button("Check in"));
    button_check_in->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_in_button_click));
    grid1->attach(*button_check_in, 0, 3, 1, 1);

    Gtk::Button *button_check_out = Gtk::manage(new Gtk::Button("Check out"));
    button_check_out->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_out_button_click));
    grid1->attach(*button_check_out, 0, 4, 1, 1);

    Gtk::Button *button_save = Gtk::manage(new Gtk::Button("Save"));
    button_save->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_save_button_click));
    grid1->attach(*button_save, 0, 5, 1, 1);

    Gtk::Button *button_load = Gtk::manage(new Gtk::Button("Load"));
    button_load->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_load_button_click));
    grid1->attach(*button_load, 0, 6, 1, 1);

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

    Gtk::Box *hbox2 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox2);

    Gtk::Grid *grid4 = Gtk::manage(new Gtk::Grid);
    grid4->set_border_width(10);
    hbox2->add(*grid4);

    Gtk::Button *button_exit = Gtk::manage(new Gtk::Button("Exit"));
    button_exit->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_exit_button_click));
    button_exit->set_hexpand(true);
    grid4->attach(*button_exit, 0, 7, 1, 1);

    vbox->show_all();
}

Dialog::~Dialog()
{
    //dtor
}

void Dialog::on_browse_catalog_button_click()
{
    dialog("Use the CLI interface to view the catalog.");
    library.print_medias();
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
    button_add_bundle->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_bundle_click));
    grid->attach(*button_add_bundle, 0, 5, 1, 1);

    window->show_all();
}

/*
***For Main Menu***
*/

void Dialog::on_check_in_button_click()
{
    // It doesn't work because of the darn private variables.
    // dialog("Please the CLI interface to check in a media item.");
    // cout << "Please input the id number of the media you would like to check in: " << endl;
    // int id_number;
    // cin >> id_number;
    // for(Media it : library.medias)
    // {
    //     if(id_number == it.get_id_number())
    //     {
    //         if(it.is_checked_out() == false)
    //         {
    //             dialog("Media is already checked in.");
    //             break;
    //         }
    //         else
    //         {
    //             it.is_checked_out() = false;
    //             dialog("Media checked in.");
    //             break;
    //         }
    //     }
    // }
    // cout << "Return to the main menu." << endl;
}

void Dialog::on_check_out_button_click()
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

void Dialog::on_add_bundle_click()
{

}

/*
***For Add Media***
*/

void Dialog::on_add_book_button_click()
{
    dialog("Use the CLI interface to add a book.");
    cout << "Adding a book." << endl;
    int id_number;
    string call_number;
    string title;
    string genre;
    string author;
    int copyright_year;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cin.ignore();
    cout << "Title: ";
    getline(cin, title);
    cout << "Genre: ";
    getline(cin, genre);
    cout << "Author: ";
    getline(cin, author);
    cout << "Copyright Year: ";
    cin >> copyright_year;
    Book* book = new Book(id_number, call_number, title, genre, author, copyright_year);
    library.create_new_media(book);
    cout << "Done adding a book. Go back to main menu." << endl;
}

void Dialog::on_add_movie_button_click()
{
    dialog("Use the CLI interface to add a movie.");
    cout << "Adding a movie." << endl;
    int id_number;
    string call_number;
    string title;
    string genre;
    int release_year;
    string producer;
    string director;
    vector<string> leading_actors;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cin.ignore();
    cout << "Title: ";
    getline(cin, title);
    cout << "Genre: ";
    getline(cin, genre);
    cout << "Release Year: ";
    cin >> release_year;
    cin.ignore();
    cout << "Producer: ";
    getline(cin, producer);
    cout << "Director: ";
    getline(cin, director);
    cout << "Please input the number of leading actors: ";
    int count;
    cin >> count;
    cin.ignore();
    cout << "Now please input the name of a leading actor and press 'enter' to input the name of the next leading actor." << endl;
    for(int i = 0; i < count; i++)
    {
        string input;
        getline(cin, input);
        leading_actors.push_back(input);
    }
    Movie* movie = new Movie(id_number, call_number, title, genre, release_year, producer, director, leading_actors);
    library.create_new_media(movie);
    cout << "Done adding a movie. Go back to main menu." << endl;
}

void Dialog::on_add_video_game_button_click()
{
    dialog("Use the CLI interface to add a video game.");
    cout << "Adding a video game." << endl;
    int id_number;
    string call_number;
    string title;
    string genre;
    int release_year;
    string studio;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cin.ignore();
    cout << "Title: ";
    getline(cin, title);
    cout << "Genre: ";
    getline(cin, genre);
    cout << "Release Year: ";
    cin >> release_year;
    cin.ignore();
    cout << "Studio: ";
    getline(cin, studio);
    Video_Game* video_game = new Video_Game(id_number, call_number, title, genre, release_year, studio);
    library.create_new_media(video_game);
    cout << "Done adding a video game. Go back to main menu." << endl;
}

void Dialog::on_add_music_album_button_click()
{
    dialog("Use the CLI interface to add a music album.");
    cout << "Adding a music album." << endl;
    int id_number;
    string call_number;
    string title;
    string genre;
    int release_year;
    string artist;
    vector<string> tracks;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cin.ignore();
    cout << "Title: ";
    getline(cin, title);
    cout << "Genre: ";
    getline(cin, genre);
    cout << "Release Year: ";
    cin >> release_year;
    cin.ignore();
    cout << "Artist: ";
    getline(cin, artist);
    cout << "Please input the number of tracks: ";
    int count;
    cin >> count;
    cin.ignore();
    cout << "Now please input the name of a track and press 'enter' to input the name of the next track." << endl;
    for(int i = 0; i < count; i++)
    {
        string input;
        getline(cin, input);
        tracks.push_back(input);
    }
    Music_Album* music_album = new Music_Album(id_number, call_number, title, genre, release_year, artist, tracks);
    library.create_new_media(music_album);
    cout << "Done adding a music album. Go back to main menu." << endl;
}

void Dialog::on_add_television_show_season_button_click()
{
    dialog("Use the CLI interface to add a television show season.");
    cout << "Adding a television show season." << endl;
    int id_number;
    string call_number;
    string title;
    string genre;
    int release_year;
    string producer;
    vector<string> voice_actors;
    vector<string> composers;
    int season_number;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cin.ignore();
    cout << "Title: ";
    getline(cin, title);
    cout << "Genre: ";
    getline(cin, genre);
    cout << "Release Year: ";
    cin >> release_year;
    cin.ignore();
    cout << "Producer: ";
    getline(cin, producer);
    cout << "Please input the number of voice actors: ";
    int count;
    cin >> count;
    cin.ignore();
    cout << "Now please input the name of a voice actor and press 'enter' to input the name of the next voice actor." << endl;
    for(int i = 0; i < count; i++)
    {
        string input;
        getline(cin, input);
        voice_actors.push_back(input);
    }
    cout << "Please input the number of composers: ";
    cin >> count;
    cin.ignore();
    cout << "Now please input the name of a composer and press 'enter' to input the name of the next composer." << endl;
    for(int i = 0; i < count; i++)
    {
        string input;
        getline(cin, input);
        composers.push_back(input);
    }
    cin >> season_number;
    Television_Show_Season* television_show_season = new Television_Show_Season(id_number, call_number, title, genre, release_year, producer, voice_actors, composers, season_number);
    library.create_new_media(television_show_season);
    cout << "Done adding a television show season. Go back to main menu." << endl;
}
