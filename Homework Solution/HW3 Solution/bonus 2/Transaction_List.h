#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Transaction_List{

public: 
    Transaction_List(string m);
    string get_month();
    void add_transaction(double transaction, string name);
    double average_transaction();
    string bonus();

private:
    std::string month;
    vector<double> transactions;
    vector<string> person;
};
