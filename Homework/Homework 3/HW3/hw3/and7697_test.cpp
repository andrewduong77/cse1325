#include "and7697_Transaction_List.h"
#include "and7697_Transaction_List.cpp"

int main()
{
    // Test 1
    cout << "For Test 1:" << endl;
    Transaction_List test1 {"May"};
    test1.add_transaction(150);
    test1.add_transaction(225.3);
    test1.add_transaction(78.9);
    test1.add_transaction(523.99);

    cout << "The month is " << test1.get_month() << "." << endl;
    if(test1.get_month() != "May")
    {
        cerr << "The month is incorrect." << endl;
    }
    cout << "The transaction average is " << test1.average_transaction() << "." << endl;
    if(test1.average_transaction() != 244.5475)
    {
        cerr << "The transaction average is incorrect." << endl;
    }
    cout << "-------------------------" << endl;

    // Test 2
    cout << "For Test 2:" << endl;
    Transaction_List test2 {"March"};
    test2.add_transaction(150);
    test2.add_transaction(225.3);
    test2.add_transaction(78.9);
    test2.add_transaction(523.99);

    cout << "The month is " << test2.get_month() << "." << endl;
    if(test2.get_month() != "May")
    {
        cerr << "The month is incorrect." << endl;
    }
    cout << "The transaction average is " << test2.average_transaction() << "." << endl;
    if(test2.average_transaction() != 244.5475)
    {
        cerr << "The transaction average is incorrect." << endl;
    }
    cout << "-------------------------" << endl;

    // Test 3
    cout << "For Test 2:" << endl;
    Transaction_List test3 {"May"};
    test3.add_transaction(150);
    test3.add_transaction(225.8);
    test3.add_transaction(78.9);
    test3.add_transaction(523.99);

    cout << "The month is " << test3.get_month() << "." << endl;
    if(test3.get_month() != "May")
    {
        cerr << "The month is incorrect." << endl;
    }
    cout << "The transaction average is " << test3.average_transaction() << "." << endl;
    if(test3.average_transaction() != 244.5475)
    {
        cerr << "The transaction average is incorrect." << endl;
    }
    cout << "-------------------------" << endl;

    return 0;
}
