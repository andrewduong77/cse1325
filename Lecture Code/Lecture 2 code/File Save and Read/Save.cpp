#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile ("sample_output.txt"); // open file. create if not there already
    if(myfile.is_open()) //check to see if file is open
    {
        myfile << "Sample\n"; //output to file
        myfile << "Test" << endl;
        int temp = 3;
        double tempd = 3.14;
        myfile << temp << " " << tempd; //output int and doubles
    }
    else //if we cannot open file
        cout << "Unable to open file";
    return 0;
}
