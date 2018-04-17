#include "and7697_Dialog.h"

Dialog::Dialog()
{
    set_default_size(400, 200);
    set_title("Tutorial 3");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    vbox->show_all();
}

Dialog::~Dialog()
{
    //destructor
}
