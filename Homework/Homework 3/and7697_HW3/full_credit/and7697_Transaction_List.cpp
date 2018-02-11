using namespace std;

class Transaction_List
{
    public:
        Transaction_List(string m)
        {
            month = m;
        }
        string get_month();
        void add_transaction(double transaction)
        {
            transactions.push_back(transaction);
        }
        double average_transaction();

    private:
        string month;
        vector<double> transactions;
        int num_transactions;
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
