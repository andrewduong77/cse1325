#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    cout << "Hello " <<"World" << endl;
    cout << "Your USER ID is: " ;
    int v1;
    srand(time(NULL));
    v1 = rand() % 1000;
    cout << v1 << endl;
    cout << "Enter two numbers (integers)" << endl;
    int a;
    int b;
    cout <<"a: ";
    cin >> a;
    cout <<"b: ";
    cin >> b;
    int c = a+b;
    cout << "The sum of a and b is: " << c << endl;
    int d = a-b;
    cout << "The difference of a and b (a - b) is: " << d << endl;
    int e = a*b;
    cout << "The product of a and b is: " << e << endl;
    int f = a/b;
    cout << "The quotient of a and b is: " << f << endl;

    cout << "Enter two more numbers (doubles)" << endl;
    double g, h;
    cout <<"c: ";
    cin >> g;
    cout <<"d: ";
    cin >> h;
    double i = g+h;
    double j = g-h;
    double k = g*h;
    double l = g/h;
    cout << "The sum of c and d is: " << i<< endl;
    cout << "The difference of c and d (c - d) is: " << j<< endl;
    cout << "The product of c and d is: " << k<< endl;
    cout << "The quotient of c and d is: " << l<< endl;
    cout << "Thank you USER ID " <<v1 << " for your time."<<endl;
    return 0;
}

