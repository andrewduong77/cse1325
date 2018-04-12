#include "and7697_Controller.h"

int main()
{
    Library library {};
    View view (library);
    Controller controller (library, view);

    controller.cli();
}
