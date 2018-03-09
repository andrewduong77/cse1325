#include <iostream>

using namespace std;

class Box
{
public:
    Box (double len, double wid, double hei) : length{len}, width{wid}, height{hei} {};
    virtual double volume()
    {
        return length * width * height;
    }
    string description()
    {
        return "Box";
    }
protected:
    double length, width, height;
};

class TriBox : public Box
{
public:
    TriBox (double len, double wid, double hei) : Box(len, wid, hei) {};
    double volume()
    {
        return 0.5 * length * width * height;
    }
    string description()
    {
        return "TriBox";
    }
};

class RoundBox : public Box
{
    double PI = 3.14159;
public:
    RoundBox (double dia, double hei) : Box(dia, dia, hei) {};
    double volume()
    {
        return PI * (0.5 * length) * (0.5 * length) * height;
    }
    string description()
    {
        return "RoundBox";
    }
};

void print_volume(Box& b)
{
    cout << b.volume() << endl;
}

int main()
{
    Box b(1.0, 1.0, 9.0);
    TriBox triboi(1.0, 1.0, 9.0);
    RoundBox longboi(1.0, 9.0);
    
    print_volume(b);
    print_volume(triboi);
    print_volume(longboi);
    //cout << b.volume() << endl;
    //cout << triboi.volume() << endl;
    //cout << longboi.volume() << endl;

return 0;
}
