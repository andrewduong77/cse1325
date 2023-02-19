#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    ifstream myfile ("sample_output.txt");
    if(myfile.is_open())
    {
        while (myfile >> line)
        {
            cout << line << endl;
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
