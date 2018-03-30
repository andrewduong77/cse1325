#include "and7697_Book.h"
#include "and7697_Movie.h"
#include "and7697_Video_Game.h"
#include "and7697_Music_Album.h"
#include "and7697_Television_Show_Season.h"

int main()
{
    vector<string> tracks;
    tracks.push_back("I've Been in Love Before");
    tracks.push_back("(I Just) Died in Your Arms");
    Music_Album Broadcast (1000, "1000", "Broadcast", "Soft Rock", 1986, "Cutting Crew", tracks);
    cout << "The artist of " << Broadcast.get_title() << " is " << Broadcast.get_artist() << "." << endl;
    vector<string> leading_actors;
    leading_actors.push_back("Elijah Woods");
    leading_actors.push_back("Sean Astin");
    Movie LOTR (1001, "1001", "The Lord of the Rings", "Fantasy", 2001, "New Line Cinema", "Peter Jackson", leading_actors);
    cout << "The leading actors of " << LOTR.get_title() << " are:" << LOTR.get_leading_actors() << endl;
    return 0;
}
