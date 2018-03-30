#include <iostream>

using namespace std;

enum class Month {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

enum class Currency {dollar, euro, bitcoin, pound, rouples, yen};

/*class Date {
public:
    Date(int y, Month m, int d) : year{y}, ....;
    //Date() : Date(1970, Month::Jan, 1);
    Date() : year{1970}, m{Month::Jan}, day{1};
private:
    int year, day;
    Month month;
   };*/

class Foo{
    private:
        int value;
    public:
        Foo(int val) : value{val} {};
        Foo() : Foo(0) {};

        //copy constructor - New object. Creates space in memory
        Foo(const Foo &rhs) : value{rhs.val()} {};
        //copy assignment - Existing object. Modifying what is already in memory
        Foo& operator= (const Foo &rhs)
        {
            if (this != &rhs)
                value = rhs.val();
            return *this;
        }

        ~Foo() {};
        int val() const {return value;}
};

int main()
{
    //Month m = Month::Feb;

    //cout << m << endl;

    /*int n = (int)m;
    cout << n << endl;
    Month m2 = Month(7);
    cout << m2 << endl;

    switch (m)
    {
        case Jan:
            break;
        default;
    }*/

    //m = (Month)Currency::bitcoin;
    //if(m == Currency::bitcoin)
      //  cout << "Test" << endl;

      Foo* fool = new Foo(5);
      //void* = pointer to raw memory
      void* v = fool;
      Foo* foo2 = static_cast<Foo*>(v);
}
