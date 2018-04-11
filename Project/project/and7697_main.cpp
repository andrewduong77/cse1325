#include "and7697_Book.h"
#include "and7697_Movie.h"
#include "and7697_Video_Game.h"
#include "and7697_Music_Album.h"
#include "and7697_Television_Show_Season.h"

int main()
{
    Media *City_of_Ember = new Book(1000, "1000", "City of Ember", "Science Fiction", "Jeanne DuPrau", 2003);

    vector<string> leading_actors;
    leading_actors.push_back("Elijah Woods");
    leading_actors.push_back("Sean Astin");
    Media *The_Lord_of_the_Rings = new Movie(1001, "1001", "The Lord of the Rings", "Fantasy", 2001, "New Line Cinema", "Peter Jackson", leading_actors);

    Media *Halo_3 = new Video_Game(1002, "1002", "Halo 3", "Shooter", 2007, "Bungie");

    vector<string> tracks;
    tracks.push_back("I've Been in Love Before");
    tracks.push_back("(I Just) Died in Your Arms");
    Media *Broadcast = new Music_Album(1003, "1003", "Broadcast", "Soft Rock", 1986, "Cutting Crew", tracks);

    vector<string> voice_actors;
    vector<string> composers;
    voice_actors.push_back("Dan Castellaneta");
    voice_actors.push_back("Julie Kavner");
    composers.push_back("Richard Gibbs");
    composers.push_back("Arthur B. Rubinstein");
    Media *The_Simpsons = new Television_Show_Season(1004, "1004", "The Simpsons", "Comedy", 2006, "Matt Groening", voice_actors, composers, 1);

    vector<Media *> medias;
    medias.push_back(City_of_Ember);
    medias.push_back(The_Lord_of_the_Rings);
    medias.push_back(Halo_3);
    medias.push_back(The_Simpsons);
    medias.push_back(Broadcast);
    for(Media* it : medias)
        cout << it->to_string();
    return 0;
}
