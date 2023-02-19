#include "view.h"
#include "genre.h"
#include "age.h"
#include "media_type.h"
#include "dialogs.h"
#include <iostream>
#include <string>

using namespace std;

int View::select_from_menu() {
  string menu = R"(
===================================
C1325 Video Store Management System
===================================

Media
------------
(1) Add Media
(2) List all Media
(3) Check out Media
(4) Check in Media

Patrons
-------
(5) Add patron
(6) List all patrons

Utility
-------
(9) Help
(0) Exit 
)";

  string result = Dialogs::input(menu, "Main Menu");
  try {
    return (result == "CANCEL") ? 0 : stoi(result);
  } catch (...) {
    return -1;
  }
}

string View::get_medias() {
  string medias = "";
  for (int i=0; i<video_store.number_of_medias(); ++i) {
    medias += to_string(i) + ") " + video_store.media_to_string(i) + '\n';
  }
  return medias;
}

void View::list_medias() {
  Dialogs::message(get_medias(), "List of Video Store Media");
}


int View::select_media() {
  string result = Dialogs::input(get_medias(), "Select a Media");
  try {
    return (result == "CANCEL") ? -1 : stoi(result);
  } catch (...) {
    Dialogs::message("Invalid entry - please type an integer");
  }
}

string View::get_patrons() {
  string patrons = "";
  for (int i=0; i<video_store.number_of_patrons(); ++i) {
    patrons += to_string(i) + ") " + video_store.patron_to_string(i) + '\n';
  }
  return patrons;
}


void View::list_patrons() {
  Dialogs::message(get_patrons(), "List of Beloved Patrons");
}

int View::select_patron() {
  string patrons = get_patrons();

  string result = Dialogs::input(patrons, "Select a Beloved Patron");
  try {
    return (result == "CANCEL") ? -1 : stoi(result);
  } catch (...) {
    Dialogs::message("Invalid entry - please type an integer");
  }
}

int View::select_genre() {
    string genres = "";
    for (int i = 0; i < Genre::num_genres; ++i)
      genres += to_string(i) + ") " + Genre(i).to_string() + '\n';

  string result = Dialogs::input(genres, "Select a genre");
  try {
    return (result == "CANCEL") ? -1 : stoi(result);
  } catch (...) {
    Dialogs::message("Invalid entry - please type an integer");
  }
}

int View::select_age() {
    string ages = "";
    for (int i = 0; i < Age::num_ages; ++i)
      ages += to_string(i) + ") " + Age(i).to_string() + '\n';

  string result = Dialogs::input(ages, "Select an Age Category");
  try {
    return (result == "CANCEL") ? -1 : stoi(result);
  } catch (...) {
    Dialogs::message("Invalid entry - please type an integer");
  }
}

int View::select_media_type() {
    string media_type = "";
    for (int i = 0; i < Media_Type::num_media_type; ++i)
      media_type += to_string(i) + ") " + Media_Type(i).to_string() + '\n';

  string result = Dialogs::input(media_type, "Select Media_Type Type");
  try {
    return (result == "CANCEL") ? -1 : stoi(result);
  } catch (...) {
    Dialogs::message("Invalid entry - please type an integer");
  }
}


void View::help() {
  string helptext = R"(
The VTS tracks media assets for a video store, including those who check out and return those items.

(1) Add Media - This allows the store manager to enter data
    associated with a new video.
(2) List all Media - All data known about each video
    in the store is listed.
(3) Check out Media - Enter the data for patrons who check out
    a media, and mark that media as checked out.
(4) Check in Media - Select a video and mark it as checked in.

(5) Add patron - This allows the store manager to enter data associated with a new video store patron.

(6) List patrons - All data know about each patron of the video store.

(9) Help - Print this text.
(0) Exit - Exit the program. WARNING: The current version does NOT
    save any entered data. This feature will be added in the "next version".

Use the '99' command to pre-populate test data.
  )";
  Dialogs::message(helptext, "Help");
}


