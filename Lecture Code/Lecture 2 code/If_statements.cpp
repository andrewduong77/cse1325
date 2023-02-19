#include <iostream>

using namespace std;

int main () {

    int a; // user input
    int b; // user input
    int c; // larger number
    
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    
    if (a > b)
    {
        c = a;
}
    else
        c = b;
     
    cout << "The larger number was " << c << endl;
    
    int d; // smaller number
    
    d = (a < b) ? a : b;
    
    cout << "The smaller number was " << d << endl;

}
