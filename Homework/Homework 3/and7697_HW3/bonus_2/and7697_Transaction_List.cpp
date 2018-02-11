using namespace std;

class Transaction_List
{
    public:
        Transaction_List(string m)
        {
            month = m;
        }
        string get_month();
        void add_transaction(double high, string p)
        {
            transactions.push_back(high);
            person.push_back(p);
        }
        double average_transaction();
        string bonus();

    private:
        string month;
        vector<double> transactions;
        vector<string> person;
};

string Transaction_List::get_month()
{
    return month;
}

double Transaction_List::average_transaction()
{
    double total_transactions = 0;
    for(int i = 0; i < transactions.size(); i++)
    {
        total_transactions += transactions[i];
    }
    return total_transactions / transactions.size();
}

string Transaction_List::bonus()
{
    double max_transaction = 0;
    string max_person;
    for(int i = 0; i < transactions.size(); i++)
    {
        if(transactions[i] > max_transaction)
        {
            max_transaction = transactions[i];
            max_person = person[i];
        }
    }
    return max_person;
}
