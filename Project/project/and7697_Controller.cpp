#include "and7697_Controller.h"

void Controller::cli()
{
    int cmd = -1;
    while(cmd != 9)
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
    case 1: // load file
//        load_file();
        break;
    case 2: // save file
//        save_file();
        break;
    case 3:

        break;
    case 9: // exit
        cout << endl << "Thank You!";
        break;
    default: // invalid input
        cout << endl << view.print_try_again_message();
        break;
    }
}

//void Controller::load_file()
//{
//    string file = "and7697_save_file.txt";
//    ifstream my_file(file);
//    string line;
//    string name;
//    double price;
//    int year, month, day, hour, minute, second;
//    Date date {0, 0, 0, 0, 0, 0};
//    char ignore;
//    Transaction transaction {0, ""};
//    if(my_file.is_open())
//    {
//        my_file >> transactions;
//        cout << endl << "File loaded successfully.";
//    }
//    else
//        cout << endl << "Unable to open file.";
//}
//
//void Controller::save_file()
//{
//    string file = "and7697_save_file.txt";
//    ofstream my_file(file);
//    if(my_file.is_open())
//    {
//        if(my_file << transactions.to_string())
//            cout << endl << "File saved successfully.";
//        else
//            cout << endl << "Unable to save file.";
//    }
//    else
//        cout << endl << "Unable to open file.";
//}
