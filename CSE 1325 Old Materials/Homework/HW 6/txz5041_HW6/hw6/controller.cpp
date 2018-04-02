#include "controller.h"
#include "view.h"
#include "video_store.h"
#include "media.h"
#include "patron.h"
#include "genre.h"
#include "media_type.h"
#include "age.h"
#include "dialogs.h"
#include <iostream>
#include <string>

using namespace std;

void Controller::cli() {
  int cmd = -1;
  while (cmd != 0) {
    cmd = view.select_from_menu();
    execute_cmd(cmd);
  }
}

void Controller::execute_cmd(int cmd) {
  if (cmd == 1) {
    string title, leading_actor, director, copyright, id;
    int genre, media_type, age;
    bool cancel = false;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Video Entry");

    // Title
    Gtk::HBox b_title;
    
    Gtk::Label l_title{"Title:"};
    l_title.set_width_chars(15);
    b_title.pack_start(l_title, Gtk::PACK_SHRINK);

    Gtk::Entry e_title;
    e_title.set_max_length(50);
    b_title.pack_start(e_title, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_title, Gtk::PACK_SHRINK);

    // Leading Actor
    Gtk::HBox b_leading_actor;

    Gtk::Label l_leading_actor{"Leading Actor:"};
    l_leading_actor.set_width_chars(15);
    b_leading_actor.pack_start(l_leading_actor, Gtk::PACK_SHRINK);

    Gtk::Entry e_leading_actor;
    e_leading_actor.set_max_length(50);
    b_leading_actor.pack_start(e_leading_actor, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_leading_actor, Gtk::PACK_SHRINK);

    
    // Director
    Gtk::HBox b_director;

    Gtk::Label l_director{"Director:"};
    l_director.set_width_chars(15);
    b_director.pack_start(l_director, Gtk::PACK_SHRINK);

    Gtk::Entry e_director;
    e_director.set_max_length(50);
    b_director.pack_start(e_director, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_director, Gtk::PACK_SHRINK);


    // Copyright Year
    Gtk::HBox b_copyright;

    Gtk::Label l_copyright{"Copyright date:"};
    l_copyright.set_width_chars(15);
    b_copyright.pack_start(l_copyright, Gtk::PACK_SHRINK);

    Gtk::Entry e_copyright;
    e_copyright.set_max_length(50);
    b_copyright.pack_start(e_copyright, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_copyright, Gtk::PACK_SHRINK);

    // Age
    Gtk::HBox b_age;

    Gtk::Label l_age{"Age:"};
    l_age.set_width_chars(15);
    b_age.pack_start(l_age, Gtk::PACK_SHRINK);

    Gtk::ComboBoxText c_age;
    c_age.set_size_request(160);
    c_age.append("G");
    c_age.append("PG");
    c_age.append("PG-13");
    c_age.append("R");
    c_age.append("NC-17");
    b_age.pack_start(c_age, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_age, Gtk::PACK_SHRINK);

    // Genre
    Gtk::HBox b_genre;

    Gtk::Label l_genre{"Genre:"};
    l_genre.set_width_chars(15);
    b_genre.pack_start(l_genre, Gtk::PACK_SHRINK);

    Gtk::ComboBoxText c_genre;
    c_genre.set_size_request(160);
    c_genre.append("Action");
    c_genre.append("Comedy");
    c_genre.append("Drama");
    c_genre.append("Fantasy");
    c_genre.append("Documentary");
    c_genre.append("Horror");
    c_genre.append("Science Fiction");
    c_genre.append("Animated");
    b_genre.pack_start(c_genre, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_genre, Gtk::PACK_SHRINK);

    // Media
    Gtk::HBox b_media_type;

    Gtk::Label l_media_type{"Media:"};
    l_media_type.set_width_chars(15);
    b_media_type.pack_start(l_media_type, Gtk::PACK_SHRINK);

    Gtk::ComboBoxText c_media_type;
    c_media_type.set_size_request(160);
    c_media_type.append("DVD");
    c_media_type.append("Blueray");
    c_media_type.append("Netflix");
    c_media_type.append("Amazon");
    c_media_type.append("HBOGO");
    b_media_type.pack_start(c_media_type, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_media_type, Gtk::PACK_SHRINK);

    // ID
    Gtk::HBox b_id;
    
    Gtk::Label l_id{"ID:"};
    l_id.set_width_chars(15);
    b_id.pack_start(l_id, Gtk::PACK_SHRINK);

    Gtk::Entry e_id;
    e_id.set_max_length(50);
    b_id.pack_start(e_id, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_id, Gtk::PACK_SHRINK);

    // Dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();
    while (Gtk::Main::events_pending())  Gtk::Main::iteration();

    title = e_title.get_text();
    leading_actor = e_leading_actor.get_text();
    director = e_director.get_text();
    copyright = e_copyright.get_text();
    age = c_age.get_active_row_number();
    genre = c_genre.get_active_row_number();
    media_type = c_media_type.get_active_row_number();
    id = e_id.get_text();
    

    if (result == 1)
      video_store.add_media(Media(title, leading_actor, director, copyright, genre, media_type, age, id));

 } else if (cmd == 2) { // List all medias
    view.list_medias();

 } else if (cmd == 3) { // Check out media
    int med, pat;

    med = view.select_media();

    if (med >= 0) {
      pat = view.select_patron();

      if (pat >= 0) {
        try {
          video_store.check_out(med, pat);
        } catch (Media::Invalid_transaction e) {
          Dialogs::message("That media is already checked out!", "ERROR");
        }
      }
    }
    
 } else if (cmd == 4) { // Check in media
    int med;
    med = view.select_media();

    if (med >= 0) {
      try {
        video_store.check_in(med);
      } catch (Media::Invalid_transaction e) {
        Dialogs::message("That media is already checked in!", "ERROR");
      }
    }

 } else if (cmd == 5) { // Add patron
    string name, number;
    bool cancel = false;

    name = Dialogs::input("Name?");
    if (name == "CANCEL") cancel = true;

    if (!cancel) number = Dialogs::input("Phone number?");
    if (number == "CANCEL") cancel = true;

    if (!cancel)
      video_store.add_patron(Patron(name, number));
    
 } else if (cmd == 6) { // List all patrons
    view.list_patrons();

 } else if (cmd == 9) { // Help
    view.help();
 } else if (cmd == 0) { // Exit
 } else if (cmd == 99) { // Easter Egg
   video_store.easter_egg();
 } else {
   Dialogs::message("**** Invalid command - type 9 for help");
 }
}

