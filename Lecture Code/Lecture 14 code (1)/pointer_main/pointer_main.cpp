#include <iostream>

using namespace std;

int main()
{
    int x = 47;
    cout << hex <<"x = " << x << endl;

    int *y;
    cout << "y points to " << y << endl;
    //cout << "the value y points to is " << *y << endl;
    
    y = &x;
    cout << "address of x = " << &x << endl;
    cout << "y points to " << y << endl;
    cout << "the value y points to is " << *y << endl;
    
    y = 0;
    cout << "y points to " << y << endl;
    //cout << "the value y points to is " << *y << endl;
    
    cout << "x takes up this space in memory " << sizeof(x) << endl;
    cout << "y takes up this space in memory " << sizeof(y) << endl;
    cout << "y takes up this space in memory " << sizeof(*y) << endl;
    
    int z {5};
    int *a = new int;
    cout << "a points to " << a << endl;
    cout << "the value a contains is " << *a << endl;
    delete a;
    
    double *b = new double[3];
    delete[] b;
return 0;
}
