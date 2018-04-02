#include "video_store.h"
#include "media.h"

int main() {
	Video_store video_store

	bool passed = true;

	Media mov1("The Ring", "Naomi Watts", "Gore Verbinski", "2002", Genre::Horror, Media::BluRay, Age::PG-13, "0001");
	Media mov2("The Ring Two", "Naomi Watts", "Hideo Nakata", "2005", Genre::Horror, Media::DVD, Age::R, "0002");
	Media mov3("Project X", "Thomas Mann", "Nima Nourizadeh", "2013", Genre::Comedy, Media::Netflix, Age::NC-17, "0003");
	Media mov4("Palo Alto", "Emma Roberts", "Gia Capolla", "2013", Genre::Drama, Media::HBOGO, Age::R, "0004");
	Media mov5("American Gods", "Ricky Whittle", "Bryan Fuller", "2017", Genre::Science_Fiction, Media::Amazon, Age::NC-17, "0005");

	if(video_store.number_of_medias() != 0) {
	  passed = false;
	  cerr << "Started with " << video_store.number_of_medias() <, " medias" << endl;
	}

	video_store.add_media(mov1);	
	video_store.add_media(mov2);
	video_store.add_media(mov3);
	video_store.add_media(mov4);
	video_store.add_media(mov5);

	if (video_store.number_of_publications() != 5) {
	  passed = false;
	  cerr << "Ended with " << video_store.number_of_medias() "medias (expected 5)" << endl;
	}
	
	string expected = "\"The Ring\" with Naomi Watts. Directed by Gore Verbinski (2002) (Horror) (PG-13) BlueRay ID: 0001";
	string actual = video_store.media_to_string(0);
	if (actual != expected) {
	  passed = false;
	  cerr << "String from media_to_string does not match" << endl;
	  cerr << " Expected: " << expected << endl;
	  cerr << " Actual: " << actual << endl;
	}

	video_store.check_out(1, "Dodger", "617-244-9981");

	expected = "\"The Ring Two\" with Naomi Watts. Directed by Hideo Nakata (2005) (Horror) (R) DVD ID: 0002";
	if (actual != expected {
	  passed = false;
	  cerr << "String from media_to_string does not match after check out" << endl;
	  cerr << " Expected: " << expected << endl;
	  cerr << " Actual: " << actual << endl;	
	}

	video_store.check_in(1);
	
	expected = "\"The Ring Two\" with Naomi Watts. Directed by Hideo Nakata (2005) (Horror) (R) DVD ID: 0002";
	actual = video_store.medias_to_string(1);
	if (actual != expected) {
	  passed = false;
	  cerr << "String from medias_to_string does not match after check in" << endl;
	  cerr << " Expected: " << expected << endl;
	  cerr << " Actual: " << actual << endl;	
	}	

	if (!passed) cerr << "fail" << endl;
	}










	  















