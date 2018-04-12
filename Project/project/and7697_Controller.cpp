#include "and7697_Controller.h"

void Controller::cli()
{
    int cmd = -1;
    while(cmd != 5)
    {
        cout << view.get_menu();
        cin >> cmd;
        execute_cmd(cmd);
        cout << endl;
    }
}

void Controller::execute_cmd(int cmd)
{
    switch(cmd)
    {
    case 1: // browse catalog
        library.print_medias();
        break;
    case 2: // add
        cli_add();
        break;
    case 3: // check in

        break;
    case 4: // check out

        break;
    case 5: // exit
        cout << endl << "Thank You!";
        break;
    default: // invalid input
        cout << endl << view.print_try_again_message();
        break;
    }
}

void Controller::cli_add()
{
    int cmd_add = -1;
    while(cmd_add != 6)
    {
        cout << view.get_media_menu();
        cin >> cmd_add;
        cmd_add = execute_cmd_add(cmd_add);
        cout << endl;
    }
}

int Controller::execute_cmd_add(int cmd_add)
{
    switch(cmd_add)
    {
    case 1: // add book
        add_book();
        cout << "Does not work!" << endl;
        cmd_add = 6; // to exit
        break;
    case 2: // add movie
        add_movie();
        cmd_add = 6; // to exit
        break;
    case 3: // add video game
        add_video_game();
        cmd_add = 6; // to exit
        break;
    case 4: // add music album
        add_music_album();
        cmd_add = 6; // to exit
        break;
    case 5: // add television show
        add_television_show_season();
        cmd_add = 6; // to exit
        break;
    case 6: // exit
        break;
    default: // invalid input
        cout << endl << view.print_try_again_message();
        break;
    }
    return cmd_add;
}

void Controller::add_book()
{
    int id_number;
    string call_number;
    string title;
    string genre;
    string author;
    int copyright_year;
    string suppress;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cout << "Title: ";
    cin >> suppress; // suppress the newline character
    getline(cin, title);
    cout << "Genre: ";
    cin >> suppress; // suppress the newline character
    getline(cin, genre);
    cout << "Author: ";
    cin >> suppress; // suppress the newline character
    getline(cin, author);
    cout << "Copyright Year: ";
    cin >> copyright_year;
    Book* book = new Book(id_number, call_number, title, genre, author, copyright_year);
    library.create_new_media(book);
}

void Controller::add_movie()
{
    int id_number;
    string call_number;
    string title;
    string genre;
    int release_year;
    string producer;
    string director;
    string suppress;
    vector<string> leading_actors;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cout << "Title: ";
    cin >> suppress; // suppress the newline character
    getline(cin, title);
    cout << "Genre: ";
    cin >> suppress; // suppress the newline character
    getline(cin, genre);
    cout << "Release Year: ";
    cin >> release_year;
    cout << "Producer: ";
    cin >> suppress; // suppress the newline character
    getline(cin, producer);
    cout << "Director: ";
    cin >> suppress; // suppress the newline character
    getline(cin, director);
    cout << "Please input the number of leading actors: ";
    int count;
    cin >> count;
    cout << "Now please input the name of a leading actor and press 'enter' to input the name of the next leading actor." << endl;
    for(int i = 0; i < count; i++)
    {
        string input;
        cin >> suppress; // suppress the newline character
        getline(cin, input);
        leading_actors.push_back(input);
    }
    Movie* movie = new Movie(id_number, call_number, title, genre, release_year, producer, director, leading_actors);
    library.create_new_media(movie);
}

void Controller::add_video_game()
{
    int id_number;
    string call_number;
    string title;
    string genre;
    int release_year;
    string studio;
    string suppress;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cout << "Title: ";
    cin >> suppress; // suppress the newline character
    getline(cin, title);
    cout << "Genre: ";
    cin >> suppress; // suppress the newline character
    getline(cin, genre);
    cout << "Release Year: ";
    cin >> release_year;
    cout << "Studio: ";
    cin >> suppress; // suppress the newline character
    getline(cin, studio);
    Video_Game* video_game = new Video_Game(id_number, call_number, title, genre, release_year, studio);
    library.create_new_media(video_game);
}

void Controller::add_music_album()
{
    int id_number;
    string call_number;
    string title;
    string genre;
    int release_year;
    string artist;
    vector<string> tracks;
    string suppress;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cout << "Title: ";
    cin >> suppress; // suppress the newline character
    getline(cin, title);
    cout << "Genre: ";
    cin >> suppress; // suppress the newline character
    getline(cin, genre);
    cout << "Release Year: ";
    cin >> release_year;
    cout << "Artist: ";
    cin >> suppress; // suppress the newline character
    getline(cin, artist);
    cout << "Please input the number of tracks: ";
    int count;
    cin >> count;
    cout << "Now please input the name of a track and press 'enter' to input the name of the next track." << endl;
    for(int i = 0; i < count; i++)
    {
        string input;
        cin >> suppress; // suppress the newline character
        getline(cin, input);
        tracks.push_back(input);
    }
    Music_Album* music_album = new Music_Album(id_number, call_number, title, genre, release_year, artist, tracks);
    library.create_new_media(music_album);
}

void Controller::add_television_show_season()
{
    int id_number;
    string call_number;
    string title;
    string genre;
    int release_year;
    string producer;
    vector<string> voice_actors;
    vector<string> composers;
    int season_number;
    string suppress;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cout << "Title: ";
    cin >> suppress; // suppress the newline character
    getline(cin, title);
    cout << "Genre: ";
    cin >> suppress; // suppress the newline character
    getline(cin, genre);
    cout << "Release Year: ";
    cin >> release_year;
    cout << "Producer: ";
    cin >> suppress; // suppress the newline character
    getline(cin, producer);
    cout << "Please input the number of voice actors: ";
    int count;
    cin >> count;
    cout << "Now please input the name of a voice actor and press 'enter' to input the name of the next voice actor." << endl;
    for(int i = 0; i < count; i++)
    {
        string input;
        cin >> suppress; // suppress the newline character
        getline(cin, input);
        voice_actors.push_back(input);
    }
    cout << "Please input the number of composers: ";
    cin >> count;
    cout << "Now please input the name of a composer and press 'enter' to input the name of the next composer." << endl;
    for(int i = 0; i < count; i++)
    {
        string input;
        cin >> suppress; // suppress the newline character
        getline(cin, input);
        composers.push_back(input);
    }
    Television_Show_Season* television_show_season = new Television_Show_Season(id_number, call_number, title, genre, release_year, producer, voice_actors, composers, season_number);
    library.create_new_media(television_show_season);
}
