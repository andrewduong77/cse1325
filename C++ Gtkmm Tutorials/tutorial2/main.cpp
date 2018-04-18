#include <gtkmm.h>

int main(int argc, char *argv[])
{
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "com.gtkmm.tutorial2.base");

    Gtk::Window window;

    window.set_default_size(400, 200);
    window.set_title("Tutorial 2");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    window.add(*vbox);

    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);
    Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    filemenu->append(*menuitem_quit);

    Gtk::Grid *grid = Gtk::manage(new Gtk::Grid);
    grid->set_border_width(10);
    vbox->add(*grid);

    Gtk::Button *b1 = Gtk::manage(new Gtk::Button("Big Button 1"));
    b1->set_hexpand(true);
    b1->set_vexpand(true);
    grid->attach(*b1, 0, 0, 1, 2);

    Gtk::Button *b2 = Gtk::manage(new Gtk::Button("Button 2"));
    grid->attach(*b2, 1, 0, 1, 1);

    Gtk::Button *b3 = Gtk::manage(new Gtk::Button("Button 3"));
    grid->attach(*b3, 1, 1, 1, 1);

    vbox->show_all();

    return app->run(window);
}
