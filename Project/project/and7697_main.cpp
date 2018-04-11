#include "and7697_Book.h"
#include "and7697_Movie.h"
#include "and7697_Video_Game.h"
#include "and7697_Music_Album.h"
#include "and7697_Television_Show_Season.h"
#include "and7697_Controller.h"

int main()
{
    Library library {};
    View view (library);
    Controller controller (library, view);

    controller.cli();
}
