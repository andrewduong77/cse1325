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

    title = Dialogs::input("Title?");
    if (title == "CANCEL") cancel = true;
    
    if (!cancel) leading_actor = Dialogs::input("Leading Actor?");
    if (leading_actor == "CANCEL") cancel = true;

    if (!cancel) director = Dialogs::input("Director?");
    if (director == "CANCEL") cancel = true;

    if (!cancel) copyright = Dialogs::input("Copyright year?");
    if (copyright == "CANCEL") cancel = true;

    if (!cancel) genre = view.select_genre();
    if (genre < 0) cancel = true;

    if (!cancel) media_type = view.select_media_type();
    if (media_type < 0) cancel = true;

    if (!cancel) age = view.select_age();
    if (age < 0) cancel = true;

    if (!cancel) id = Dialogs::input("ID?");
    if (id == "CANCEL") cancel = true;

    if (!cancel)
      video_store.add_media(Media(title, leading_actor, director, copyright, genre, media_type, age, id));

 } else if (cmd == 2) { // List all medias
    view.list_medias();

 } else if (cmd == 3) { // Check out media
    int pub, pat;

    pub = view.select_media();

    if (pub >= 0) {
      pat = view.select_patron();

      if (pat >= 0) {
        try {
          video_store.check_out(pub, pat);
        } catch (Media::Invalid_transaction e) {
          Dialogs::message("That media is already checked out!", "ERROR");
        }
      }
    }
    
 } else if (cmd == 4) { // Check in media
    int pub;
    pub = view.select_media();

    if (pub >= 0) {
      try {
        video_store.check_in(pub);
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

