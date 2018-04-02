#include "video_store.h"

void Video_Store::add_media(Media med) {
  medias.push_back(med);
}

void Video_Store::add_patron(Patron pat) {
  patrons.push_back(pat);
}

void Video_Store::check_out(int media_index, int patron_index) {
  medias[media_index].check_out(patrons[patron_index]);
}

void Video_Store::check_in(int media_index) {
  medias[media_index].check_in();
}

string Video_Store::media_to_string(int media_index) {
  return medias[media_index].to_string();
}

string Video_Store::patron_to_string(int patron_index) {
  return patrons[patron_index].to_string();
}

int Video_Store::number_of_medias() {
  return medias.size();
}

int Video_Store::number_of_patrons() {
  return patrons.size();
}

void Video_Store::easter_egg() {
 add_media(Media("American Gods", "John Grisham", "Weord Scary man", "2017",
       Genre::Fantasy, Media_Type::DVD, Age::R, "0110"));
 add_media(Media("Spaceballs", "Mel Brooks", "Mel Brooks", "1987",
       Genre::Comedy, Media_Type::DVD, Age::PG, "0111"));
 add_media(Media("American Vandal", "Jimmy Tarto", "Tyler Alverez", "2017",
       Genre::Drama, Media_Type::Netflix, Age::PG13, "3012"));
 add_media(Media("Dragon Ball Fukutsono F", "Son Goku", "Hiro Mashima", "2014",
       Genre::Animated, Media_Type::HBOGO, Age::PG, "6612"));
 add_media(Media("Fight Club", "Brad Pitt", "David Fincher", "1999",
       Genre::Action, Media_Type::Blueray, Age::R, "2111"));
 add_media(Media("Project X", "Thomas Mann", "Nima Nourzadeh", "2013",
       Genre::Comedy, Media_Type::Blueray, Age::NC17, "6969"));
 add_patron(Patron("Timmy", "682-523-1111"));
 add_patron(Patron("Jimbo", "682-523-2222"));
 add_patron(Patron("Ichigo", "682-523-3333"));

}
