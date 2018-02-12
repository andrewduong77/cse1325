#include <iostream>

using namespace std;

class Transaction
{
    public:
        double get_price();
        string get_name();
        Transaction(double p, string n)
        {
            price = p;
            name = n;
        }
        string to_string() const;
        friend ostream& operator<<(ostream& ost, const Transaction& trans_two)
    private:
        double price;
        string name;
}
