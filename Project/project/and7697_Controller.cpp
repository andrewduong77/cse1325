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
