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

        break;
    case 2: // add movie

        break;
    case 3: // add video game

        break;
    case 4: // add music album

        break;
    case 5: // add television show

        break;
    default: // invalid input
        cout << endl << view.print_try_again_message();
        break;
    }
}
