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
        execute_cmd_add(cmd_add);
        cout << endl;
    }
}

void Controller::execute_cmd_add(int cmd_add)
{
    switch(cmd_add)
    {
    case 1: // add book
        add_book();
        break;
    case 2: // add movie
        add_movie();
        break;
    case 3: // add video game

        break;
    case 4: // add music album

        break;
    case 5: // add television show

        break;
    case 6: // exit
        break;
    default: // invalid input
        cout << endl << view.print_try_again_message();
        break;
    }
}

void Controller::add_book()
{
    int id_number;
    string call_number;
    string title;
    string genre;
    string author;
    int copyright_year;
    string consume;
    cout << "ID Number: ";
    cin >> id_number;
    cout << "Call Number: ";
    cin >> call_number;
    cout << "Title: ";
    cin >> consume;
    getline(cin, title);
    cout << "Genre: ";
    cin >> consume;
    getline(cin, genre);
    cout << "Author: ";
    cin >> consume;
    getline(cin, author);
    cout << "Copyright Year: ";
    cin >> copyright_year;
    Book* book = new Book(id_number, call_number, title, genre, author, copyright_year);
    library.create_new_media(book);
}

void Controller::add_movie()
{
//    int id_number;
//    string call_number;
//    string title;
//    string genre;
//    int release_year;
//    string producer;
//    string director;
//    string consume;
//    vector<string> leading_actors;
//    cout << "ID Number: ";
//    cin >> id_number;
//    cout << "Call Number: ";
//    cin >> call_number;
//    cout << "Title: ";
//    cin >> consume;
//    getline(cin, title);
//    cout << "Genre: ";
//    cin >> consume;
//    getline(cin, genre);
//    cout << "Release Year: ";
//    cin >> release_year;
//    cout << "Producer: ";
//    cin >> consume;
//    getline(cin, producer);
//    cout << "Director: ";
//    cin >> consume;
//    getline(cin, director);
//    cout << R"(Leading Actors:
//(Press 'enter' after entering each actor name. When done type "finish" and press 'enter'.))";
//    do
//    {
//        string input;
//        cin >> consume;
//        getline(cin, input);
//        if(input != "finish")
//            leading_actors.push_back(input);
//    }while(input != "finish");
////    string token;
////    while(cin.good())
////    {
////        getline(cin, token, ',');
////        leading_actors.push_back(token);
////    }
//    Movie* movie = new Movie(id_number, call_number, title, genre, release_year, producer, director, leading_actors);
//    library.create_new_media(movie);
}
