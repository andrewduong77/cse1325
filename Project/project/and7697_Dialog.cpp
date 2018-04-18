#include "and7697_Dialog.h"

Dialog::Dialog()
{
    set_default_size(0, 0);
    set_title("Library Management System");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    Gtk::Grid *grid = Gtk::manage(new Gtk::Grid);
    grid->set_border_width(10);
    vbox->add(*grid);

    Gtk::Label *label = Gtk::manage(new Gtk::Label(R"(Library Management System
Main Menu)"));
    grid->attach(*label, 0, 0, 1, 1);

    Gtk::Button *b1 = Gtk::manage(new Gtk::Button("Browse Catalog"));
    b1->set_hexpand(true);
    b1->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_browse_catalog_button_click));
    grid->attach(*b1, 0, 1, 1, 1);

    Gtk::Button *b2 = Gtk::manage(new Gtk::Button("Add"));
    b2->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_add_button_click));
    grid->attach(*b2, 0, 2, 1, 1);

    Gtk::Button *b3 = Gtk::manage(new Gtk::Button("Check in"));
    b3->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_in_button_click));
    grid->attach(*b3, 0, 3, 1, 1);

    Gtk::Button *b4 = Gtk::manage(new Gtk::Button("Check out"));
    b4->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_check_out_button_click));
    grid->attach(*b4, 0, 4, 1, 1);

    Gtk::Button *b5 = Gtk::manage(new Gtk::Button("Save File"));
    b5->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_save_button_click));
    grid->attach(*b5, 0, 5, 1, 1);

    Gtk::Button *b6 = Gtk::manage(new Gtk::Button("Load File"));
    b6->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_load_button_click));
    grid->attach(*b6, 0, 6, 1, 1);

    Gtk::Button *b7 = Gtk::manage(new Gtk::Button("Exit"));
    b7->signal_clicked().connect(sigc::mem_fun(*this, &Dialog::on_exit_button_click));
    grid->attach(*b7, 0, 7, 1, 1);

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
