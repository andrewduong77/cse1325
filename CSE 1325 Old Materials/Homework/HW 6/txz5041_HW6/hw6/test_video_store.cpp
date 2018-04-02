#include "patron.h"
#include "media.h"
#include "video_store.h"

int main() {
  Video_Store video_store;

  bool passed = true;

  Patron mike("Mike", "632-982-1111");
  Patron jinx("Jinx", "632-982-2222");
  Patron coe("Coe", "632-982-3333");

  if (video_store.number_of_patrons() != 0) {
    passed = false;
    cerr << "Started with " << video_store.number_of_patrons() << " patrons" << endl;
  }

  video_store.add_patron(mike);
  video_store.add_patron(jinx);
  video_store.add_patron(coe);

  if (video_store.number_of_patrons() != 3) {
    passed = false;
    cerr << "Ended with " << video_store.number_of_patrons() << " patrons (expected 3)" << endl;
  }

  if (video_store.patron_to_string(2) != "Coe (632-982-3333)") {
    passed = false;
    cerr << "Patron 3 is " << video_store.patron_to_string(2) << " (not Coe)" << endl;
  }

  //
  // Test adding medias
  //

  Media mov1("The Ring", "Naomi Watts", "Gore Verbinski", "2002", Genre::Horror, Media_Type::BlueRay, Age::PG13, "0001");
  Media mov2("The Ring Two", "Naomi Watts", "Hideo Nakata", "2005", Genre::Horror, Media_Type::DVD, Age::R, "0002");
  Media mov3("Project X", "Thomas Mann", "Nima Nourizadeh", "2013", Genre::Comedy, Media_Type::Netflix, Age::NC17, "0003");
  Media mov4("Palo Alto", "Emma Roberts", "Gia Capolla", "2013", Genre::Drama, Media_Type::HBOGO, Age::R, "0004");
  Media mov5("American Gods", "Ricky Whittle", "Bryan Fuller", "2017", Genre::Science_Fiction, Media_Type::Amazon, Age::NC17, "0005");

  if (video_store.number_of_medias() != 0) {
    passed = false;
    cerr << "Started with " << video_store.number_of_medias() << " medias" << endl;
  }

  video_store.add_media(mov1);
  video_store.add_media(mov2);
  video_store.add_media(mov3);
  video_store.add_media(mov4);
  video_store.add_media(mov5);

  if (video_store.number_of_medias() != 5) {
    passed = false;
    cerr << "ended with " << video_store.number_of_medias() << " medias (expected 5)" << endl;
  }

  if (video_store.media_to_string(0) != 
      "\"The Ring\" with Naomi Watts. Directed by Gore Verbinski (2002) (Horror) (PG-13) BlueRay ID: 0001") {
    passed = false;
    cerr << "The Ring string from media_to_string doesn't match" << endl;
  }

  //
  // Test check out and check in
  //

  video_store.check_out(1, 1);

  string expected = "\"The Ring Two\" with Naomi Watts. Directed by Hideo Nakata (2005) (Horror) (R) DVD ID: 0002\nChecked out to Jinx (632-982-2222)";
  string actual = video_store.media_to_string(1);
  if (actual != expected) {
    passed = false;
    cerr << "String from media_to_string doesn't match after check out" << endl;
    cerr << "  Expected: " << expected << endl;
    cerr << "  Actual:   " << actual << endl;
  }

  video_store.check_in(1);
  expected = "\"The Ring Two\" with Naomi Watts. Directed by Hideo Nakata (2005) (Horror) (R) DVD ID: 0002;
  actual = video_store.media_to_string(1);
  if (actual != expected) {
    passed = false;
    cerr << "String from media_to_string doesn't match after check in" << endl;
    cerr << "  Expected: " << expected << endl;
    cerr << "  Actual:   " << actual << endl;
  }


  //
  // Show results
  //
  if (!passed) {
    cout << "fail" << endl;
    return -1;
  }

  return 0;
}
