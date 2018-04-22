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

    Gtk::Label *label1 = Gtk::manage(new Gtk::Label("Main Menu"));
    grid1->attach(*label1, 0, 0, 1, 1);

    Gtk::Button *b1 = Gtk::manage(new Gtk::Button("Browse Catalog"));
    b1->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_browse_catalog_button_click));
    grid1->attach(*b1, 0, 1, 1, 1);

    Gtk::Button *b3 = Gtk::manage(new Gtk::Button("Check in"));
    b3->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_in_button_click));
    grid1->attach(*b3, 0, 3, 1, 1);

    Gtk::Button *b4 = Gtk::manage(new Gtk::Button("Check out"));
    b4->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_out_button_click));
    grid1->attach(*b4, 0, 4, 1, 1);

    Gtk::Button *b5 = Gtk::manage(new Gtk::Button("Save File"));
    b5->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_save_button_click));
    grid1->attach(*b5, 0, 5, 1, 1);

    Gtk::Button *b6 = Gtk::manage(new Gtk::Button("Load File"));
    b6->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_load_button_click));
    grid1->attach(*b6, 0, 6, 1, 1);

    Gtk::Box *vbox2 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    hbox1->add(*vbox2);

    Gtk::Grid *grid2 = Gtk::manage(new Gtk::Grid);
    grid2->set_border_width(10);
    vbox2->add(*grid2);

    Gtk::Label *label2 = Gtk::manage(new Gtk::Label("Add"));
    grid2->attach(*label2, 0, 0, 1, 1);

    Gtk::Button *b9 = Gtk::manage(new Gtk::Button("Add Transaction"));
    b9->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_button_click));
    grid2->attach(*b9, 0, 2, 1, 1);

    Gtk::Button *b10 = Gtk::manage(new Gtk::Button("Add Customer"));
    b10->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_in_button_click));
    grid2->attach(*b10, 0, 3, 1, 1);

    Gtk::Button *b11 = Gtk::manage(new Gtk::Button("Add Librarian"));
    b11->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_out_button_click));
    grid2->attach(*b11, 0, 4, 1, 1);

    Gtk::Button *b12 = Gtk::manage(new Gtk::Button("Add Bundle"));
    b12->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_save_button_click));
    grid2->attach(*b12, 0, 5, 1, 1);

    Gtk::Box *vbox3 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    hbox1->add(*vbox3);

    Gtk::Grid *grid3 = Gtk::manage(new Gtk::Grid);
    grid3->set_border_width(10);
    vbox3->add(*grid3);

    Gtk::Label *label3 = Gtk::manage(new Gtk::Label("Add Media"));
    grid3->attach(*label3, 0, 0, 1, 1);

    Gtk::Button *b15 = Gtk::manage(new Gtk::Button("Add Book"));
    b15->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_browse_catalog_button_click));
    grid3->attach(*b15, 0, 1, 1, 1);

    Gtk::Button *b16 = Gtk::manage(new Gtk::Button("Add Movie"));
    b16->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_button_click));
    grid3->attach(*b16, 0, 2, 1, 1);

    Gtk::Button *b17 = Gtk::manage(new Gtk::Button("Add Video Game"));
    b17->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_in_button_click));
    grid3->attach(*b17, 0, 3, 1, 1);

    Gtk::Button *b18 = Gtk::manage(new Gtk::Button("Add Music Album"));
    b18->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_out_button_click));
    grid3->attach(*b18, 0, 4, 1, 1);

    Gtk::Button *b19 = Gtk::manage(new Gtk::Button("Add Television Show Season"));
    b19->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_save_button_click));
    grid3->attach(*b19, 0, 5, 1, 1);

    Gtk::Box *hbox2 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 0));
    vbox->add(*hbox2);

    Gtk::Grid *grid4 = Gtk::manage(new Gtk::Grid);
    grid4->set_border_width(10);
    hbox2->add(*grid4);

    Gtk::Button *b7 = Gtk::manage(new Gtk::Button("Exit"));
    b7->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_exit_button_click));
    b7->set_hexpand(true);
    grid4->attach(*b7, 0, 7, 1, 1);

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

void Dialog::on_quit_click()
{
    hide();
}

void Dialog::dialog(Glib::ustring msg)
{
    Gtk::MessageDialog dlg(msg, false, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK, true);
    dlg.set_title("Gtkmm Tutorial 3");
    dlg.run();
}
