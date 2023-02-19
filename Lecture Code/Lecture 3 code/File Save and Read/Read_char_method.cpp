#include <iostream>
#include <fstream>
//#include <string>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    ifstream myfile ("sample_output.txt");
    if(myfile.is_open())
    {
        while (myfile.get(ch))
        {
            if (isdigit(ch))
            cout << ch << endl;
        }
        if (myfile.eof()){
            cout << "End of file";
            return 0;
            }
        if (myfile.bad())
            throw runtime_error ("bad");
        
    }
    else
        cout << "Unable to open file";
     
    return 0;
}
