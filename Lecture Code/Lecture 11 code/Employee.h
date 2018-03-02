#include <string>

using namespace std;

class Employee{
public:
    Employee(string n, int i) : name {n}, id{i} {};
    double pay(double pre_tax);
    string get_name();
protected:
    string name;
    int id;
};
