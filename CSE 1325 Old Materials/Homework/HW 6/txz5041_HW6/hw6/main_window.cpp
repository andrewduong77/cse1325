#include "main_window.h"

Main_window::Main_window(Controller& controller) : _controller{controller} {

    // FLTK

    set_default_size(640, 480);

    // Put a vertical box container as the Window contents
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    //     M E N U
    // Add a menu bar as the top item in the vertical box
    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    //     F I L E
    // Create a File menu and add to the menu bar
    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

    //         T E S T
    // Append Test (the "Easter egg") to the File menu
    Gtk::MenuItem *menuitem_test = Gtk::manage(new Gtk::MenuItem("_Test", true));
    menuitem_test->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_test_click));
    filemenu->append(*menuitem_test);


    //         Q U I T
    // Append Quit to the File menu
    Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    menuitem_quit->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_quit_click));
    filemenu->append(*menuitem_quit);

    //     M E D I A
    // Create a Media menu and add to the menu bar
    Gtk::MenuItem *menuitem_media = Gtk::manage(new Gtk::MenuItem("_Media", true));
    menubar->append(*menuitem_media);
    Gtk::Menu *mediamenu = Gtk::manage(new Gtk::Menu());
    menuitem_media->set_submenu(*mediamenu);

    //         L I S T
    // Append Quit to the File menu
    Gtk::MenuItem *menuitem_listmeds = Gtk::manage(new Gtk::MenuItem("_List", true));
    menuitem_listmeds->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_list_meds_click));
    mediamenu->append(*menuitem_listmeds);

    //         A D D
    // Append Add to the Media menu
    Gtk::MenuItem *menuitem_addmed = Gtk::manage(new Gtk::MenuItem("_Add", true));
    menuitem_addmed->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_add_med_click));
    mediamenu->append(*menuitem_addmed);

    //         C H E C K   O U T
    // Append Check Out to the Media menu
    Gtk::MenuItem *menuitem_checkout = Gtk::manage(new Gtk::MenuItem("Check _Out", true));
    menuitem_checkout->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_checkout_click));
    mediamenu->append(*menuitem_checkout);

    //         C H E C K   I N
    // Append Check In to the Media menu
    Gtk::MenuItem *menuitem_checkin = Gtk::manage(new Gtk::MenuItem("Check _In", true));
    menuitem_checkin->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_checkin_click));
    mediamenu->append(*menuitem_checkin);

    //     P A T R O N
    // Create a Patron menu and add to the menu bar
    Gtk::MenuItem *menuitem_patron = Gtk::manage(new Gtk::MenuItem("Patro_n", true));
    menubar->append(*menuitem_patron);
    Gtk::Menu *patronmenu = Gtk::manage(new Gtk::Menu());
    menuitem_patron->set_submenu(*patronmenu);

    //         L I S T
    // Append List to the Patron menu
    Gtk::MenuItem *menuitem_listpatrons = Gtk::manage(new Gtk::MenuItem("_List", true));
    menuitem_listpatrons->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_list_patrons_click));
    patronmenu->append(*menuitem_listpatrons);

    //         A D D
    // Append Add to the Patron menu
    Gtk::MenuItem *menuitem_addpatron = Gtk::manage(new Gtk::MenuItem("_Add", true));
    menuitem_addpatron->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_add_patron_click));
    patronmenu->append(*menuitem_addpatron);

    //     H E L P
    // Create a Help menu and add to the menu bar
    Gtk::MenuItem *menuitem_help = Gtk::manage(new Gtk::MenuItem("_Help", true));
    menubar->append(*menuitem_help);
    Gtk::Menu *helpmenu = Gtk::manage(new Gtk::Menu());
    menuitem_help->set_submenu(*helpmenu);

    //           M A N U A L
    // Append Manual to the Help menu
    Gtk::MenuItem *menuitem_manual = Gtk::manage(new Gtk::MenuItem("_Manual", true));
    menuitem_manual->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_manual_click));
    helpmenu->append(*menuitem_manual);

    //           A B O U T
    // Append About to the Help menu
    Gtk::MenuItem *menuitem_about = Gtk::manage(new Gtk::MenuItem("_About", true));
    menuitem_about->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_about_click));
    helpmenu->append(*menuitem_about);

    // Make the box and everything in it visible
    vbox->show_all();
}

Main_window::~Main_window() { }

// C A L L B A C K S
void Main_window::on_test_click() {_controller.execute_cmd(99);}
void Main_window::on_list_meds_click() {_controller.execute_cmd(2);}
void Main_window::on_add_med_click() {_controller.execute_cmd(1);}
void Main_window::on_checkout_click() {_controller.execute_cmd(3);}
void Main_window::on_checkin_click() {_controller.execute_cmd(4);}
void Main_window::on_list_patrons_click() {_controller.execute_cmd(6);}
void Main_window::on_add_patron_click() {_controller.execute_cmd(5);}
void Main_window::on_manual_click() {_controller.execute_cmd(9);}

void Main_window::on_about_click() {
    Glib::ustring s = "<span size='20000' weight='bold'>Video Store Management System</span>\n<span size='large'>Copyright 2017 by Tausif Zaman</span>\n<span size='small'>cash icon could be implemented, sorry :( </span>";
    Gtk::MessageDialog dlg(*this, s, true, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK, true);
    dlg.run();
}

void Main_window::on_quit_click() {
    hide();
}

