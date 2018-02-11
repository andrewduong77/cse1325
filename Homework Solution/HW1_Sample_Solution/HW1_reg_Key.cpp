#include <iostream>
using namespace std;
int main()
{
    //Asking for user's name
    cout << "Hello User! What is your first and last name?" << endl;
    string first_name;
    string second_name;
    cin >> first_name >> second_name;
    cout << "Thank you " << first_name << " " << second_name << "!" << endl;
    
    //Int Section
    int int1;
    int int2;
    cout << "Input 2 ints." << endl;
    cout << "Int 1: ";
    cin >> int1;
    cout << "Int 2: ";
    cin >> int2;
    cout << int1 << " + " << int2 << " = " << int1 + int2 << endl;
    cout << int1 << " - " << int2 << " = " << int1 - int2 << endl;
    cout << int1 << " * " << int2 << " = " << int1 * int2 << endl;
    cout << int1 << " / " << int2 << " = " << int1 / int2 << endl;
    
    //Double Section
    double double1;
    double double2;
    cout << "Input 2 doubles." << endl;
    cout << "Double 1: ";
    cin >> double1;
    cout << "Double 2: ";
    cin >> double2;
    cout << double1 << " + " << double2 << " = " << double1 + double2 << endl;
    cout << double1 << " - " << double2 << " = " << double1 - double2 << endl;
    cout << double1 << " * " << double2 << " = " << double1 * double2 << endl;
    cout << double1 << " / " << double2 << " = " << double1 / double2 << endl;
    
    //Thanking user
    cout << "Thank you " << first_name << " " << second_name << " for your time.";

    return 0;
}
