#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*////////////////
Patron Class
///////////////*/
class Patron{
	public:
		Patron(string patron_name, string patron_number) : name(patron_name), number(patron_number) {}
		Patron() : name("unknown"), number("unknown") {}
		
		string to_string();
		
		string get_patron_name();
		string get_patron_number();
		
	private:
		string name;
		string number;
};

string Patron::to_string() {return name + " (" + number + ")";}
string Patron::get_patron_name() {return name;}
string Patron::get_patron_number() {return number;}

/*//////////////////
Media Class
///////////////////*/
class Media{
	public:
		Media(string m_title, string m_leading_actor, string m_director, int m_copyright, string m_genre, string m_media_type, string m_age_rating, int m_id) : title(m_title), leading_actor(m_leading_actor), director(m_director), copyright(m_copyright), genre(m_genre), age_rating(m_age_rating), media_type(m_media_type), id(m_id), checked_out(false), patron(Patron()) {}
		
		bool is_checked_out();
		
		void check_out(Patron p_patron);
		void check_in();
		
		string to_string();
		
		//Throw execption if check out called and already checked out
		//Throw exception if check in called and already checked in
		class Invalid_transaction : public exception {};
		
	private:
		string title;
		string leading_actor;
		string director;
		int copyright;
		string genre;
		string media_type;
		string age_rating;
		int id;
		bool checked_out;
		Patron patron;
};

bool Media::is_checked_out(){ return checked_out; }
void Media::check_out(Patron p_patron) {
  if (checked_out) {
    throw Invalid_transaction();
  } else {
    patron = p_patron;
    checked_out = true;
  }
}

void Media::check_in() {
  if (checked_out) {
    checked_out = false;
  } else {
    throw Invalid_transaction();
  }
}

string Media::to_string() {
  string med= "\"" + title + "\"" + " with " + leading_actor + ". Directed by " + director + ". " + std::to_string(copyright) + " ("+ genre + "). " + age_rating + ". " + media_type + ". ID: " + std::to_string(id);
  if (checked_out) {
     med += "\nChecked out to " + patron.get_patron_name() +
            " (" + patron.get_patron_number() + ")";
  }
  return med;
}

/*//////////////////
Video Store Class
///////////////////*/
class Video_Store{
    public:
    void add_media(Media med);
    void add_patron(Patron pat);

    void check_out(int media_index, int patron_index);
    void check_in(int media_index);

    string media_to_string(int media_index);
    string patron_to_string(int patron_index);

    int number_of_media();
    int number_of_patrons();

    void easter_egg();
  private:
    vector<Media> medias;
    vector<Patron> patrons;
};

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

int Video_Store::number_of_media() {
  return medias.size();
}

int Video_Store::number_of_patrons() {
  return patrons.size();
}

void Video_Store::easter_egg() {
  add_media(Media("Spaceballs", "Mel Brooks", "Mel Brooks", 1987, "Comedy", "DVD", "PG", 1001));
  add_media(Media("Jackass The Movie", "Johnny Knoxville", "Jeff Fremaine", 2002, "Comedy", "DVD", "R", 1005));
  add_media(Media("Star Trek: Nemesis", "Patrick Stewart", "Stuart Baird", 2002, "Science Fiction", "DVD", "PG-13", 2001));
  add_media(Media("Dead Poets Society", "Robin Williams", "Peter Weir", 1989, "Drama", "DVD", "PG", 1015));
  add_media(Media("Fight Club", "Brad Pitt", "David Fincher", 1999, "Action", "Blu-Ray", "R", 1102));
  add_media(Media("When in Rome", "Kristen Bell", "Mark Steven Johnson", 2010, "Romance", "PG-13", "Blu-Ray", 3000));
  add_patron(Patron("Larry", "817-555-1111"));
  add_patron(Patron("Curly", "817-555-2222"));
  add_patron(Patron("Moe", "817-555-3333"));
}

// /////////////////////////////////////
//              V I E W
// /////////////////////////////////////

class View {
  public:
    View(Video_Store& vs) : video_store(vs) { }
    string get_menu();
    string get_media_list();
    string get_patron_list();
    string get_help();
  private:
    Video_Store& video_store;
};

string View::get_menu() {
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
    return menu;
}

string View::get_media_list() {
  string list = R"(
-------------------------
List of Video Store Media
-------------------------
)";
  for (int i=0; i<video_store.number_of_media(); ++i) {
    list += std::to_string(i) + ") " + video_store.media_to_string(i) + '\n';
  }
  return list;
}

string View::get_patron_list() {
  string list = R"(
-----------------------
List of Beloved Patrons
-----------------------
)";
  for (int i=0; i<video_store.number_of_patrons(); ++i) {
    list += std::to_string(i) + ") " + video_store.patron_to_string(i) + '\n';
  }
  return list;
}

string View::get_help() {
  return "Try harder.";
}

// /////////////////////////////////////
//          C O N T R O L L E R
// /////////////////////////////////////

class Controller {
  public:
    Controller (Video_Store& vs, View& view) : video_store(vs), view(view) { }
    void cli();
    void execute_cmd(int cmd);
  private:
    int get_int(string prompt, int max_int);
    Video_Store& video_store;
    View& view;
};

void Controller::cli() {
  int cmd = -1;
  while (cmd != 0) {
    cout << view.get_menu() << endl;
    cout << "Command? ";
    cin >> cmd;
    cin.ignore(); // consume \n
    execute_cmd(cmd);
  }
}

int Controller::get_int(string prompt, int max_int) {
  int result;
  while(true) {
    cout << prompt;
    cin >> result;
    cin.ignore(); // consume \n
    if (0 <= result && result <= max_int) break;
    cout << "Please enter an integer between 0 and " << max_int << endl;
  }
  return result;
}

void Controller::execute_cmd(int cmd) {
  if (cmd == 1) { // Add media
    string title, leading_actor, director, genre, media_type, age_rating;
    int copyright, id;

    cout << "Title? ";
    getline(cin, title);

    cout << "Leading Actor? ";
    getline(cin, leading_actor);
    
    cout << "Director? ";
    getline(cin, director);

    cout << "Copyright date? ";
    cin >> copyright;

    cin.ignore();
    cout << "Genre?";
    getline(cin, genre);
    
    cout << "Media Type?";
    getline(cin, media_type);
    
    cout << "Age Rating";
    getline(cin, age_rating);

    cout << "ID? ";
    cin >> id;
    cin.ignore();

    video_store.add_media(Media(title, leading_actor, director, copyright, genre, age_rating, media_type, id));

 } else if (cmd == 2) { // List all media
    cout << view.get_media_list();

 } else if (cmd == 3) { // Check out media
    int med, pat;

    cout << view.get_media_list();
    med = get_int("Media number? ", video_store.number_of_media() - 1);

    cout << view.get_patron_list();
    pat = get_int("Patron number? ", video_store.number_of_patrons() - 1);

    try {
      video_store.check_out(med, pat);
    } catch (Media::Invalid_transaction e) {
      cerr << "##### That media is not available for check out" << endl;
    }

 } else if (cmd == 4) { // Check in media
    int med;
    cout << view.get_media_list();
    med = get_int("Media number? ", video_store.number_of_media() - 1);

    try {
      video_store.check_in(med);
    } catch (Media::Invalid_transaction e) {
       cerr << "##### That media is not available for check in" << endl;
    }

 } else if (cmd == 5) { // Add patron
    string name, number;

    cout << "Name? ";
    getline(cin, name);
    cout << "Phone number? ";
    getline(cin, number);
    video_store.add_patron(Patron(name, number));

 } else if (cmd == 6) { // List all patrons
    cout << view.get_patron_list();

 } else if (cmd == 9) { // Help
    cout << view.get_help();
 } else if (cmd == 0) { // Exit
 } else if (cmd == 99) { // Easter Egg
   video_store.easter_egg();
 } else {
   cerr << "**** Invalid command - type 9 for help" << endl << endl;
 }
}

int main()
{
    Video_Store vs;
  View view{vs};
  Controller controller(vs, view);
  controller.cli();
}
