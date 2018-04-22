#include "and7697_Dialog.h"

Dialog::Dialog()
{
    set_default_size(0, 0);
    set_title("Library Management System");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

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
    dialog("Browse Catalog Button Pressed!");
}

void Dialog::on_add_button_click()
{
    dialog("Add Button Pressed!");
}

void Dialog::on_check_in_button_click()
{
    dialog("Check in Button Pressed!");
}

void Dialog::on_check_out_button_click()
{
    dialog("Check out Button Pressed!");
}

void Dialog::on_save_button_click()
{
    dialog("Save Button Pressed!");
}

void Dialog::on_load_button_click()
{
    dialog("Load Button Pressed!");
}

void Dialog::on_exit_button_click()
{
    hide();
}

void Dialog::on_add_transaction_button_click()
{
    dialog("Add Transaction Button Pressed");
}

void Dialog::on_add_customer_button_click()
{

}

void Dialog::on_add_librarian_button_click()
{

}

void Dialog::on_add_bundle_click()
{

}

void Dialog::on_add_book_button_click()
{

}

void Dialog::on_add_movie_button_click()
{

}

void Dialog::on_add_video_game_button_click()
{

}

void Dialog::on_add_music_album_button_click()
{

}

void Dialog::on_add_television_show_season_button_click()
{

}

void Dialog::dialog(Glib::ustring msg)
{
    Gtk::MessageDialog dlg(msg, false, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK, true);
    dlg.set_title("Gtkmm Tutorial 3");
    dlg.run();
}
