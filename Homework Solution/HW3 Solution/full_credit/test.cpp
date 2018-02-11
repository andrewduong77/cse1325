#include "Transaction_List.h"
#include <iostream>

int main(){

    //Test 1
    cout << "Test 1" << endl;
    Transaction_List trans_list_one {"May"};
    trans_list_one.add_transaction(150);
    trans_list_one.add_transaction(225.3);
    trans_list_one.add_transaction(78.9);
    trans_list_one.add_transaction(523.99);
    if(trans_list_one.get_month() != "May")
        cout << "Error: the month's name is not May" << endl;
    if(trans_list_one.average_transaction() != 244.5475)
        cout << "Error: the average is not 244.5474" << endl;
        
    //Test 2
    cout << "Test 2" << endl;
    Transaction_List trans_list_two {"March"};
    trans_list_two.add_transaction(150);
    trans_list_two.add_transaction(225.3);
    trans_list_two.add_transaction(78.9);
    trans_list_two.add_transaction(523.99);
    if(trans_list_two.get_month() != "May")
        cout << "Error: the month's name is not Ma7" << endl;
    if(trans_list_two.average_transaction() != 244.5475)
        cout << "Error: the average is not 244.5474" << endl;
        
    //Test 3
    cout << "Test 3" << endl;
    Transaction_List trans_list_three {"May"};
    trans_list_three.add_transaction(150);
    trans_list_three.add_transaction(225.8);
    trans_list_three.add_transaction(78.9);
    trans_list_three.add_transaction(523.99);
    if(trans_list_three.get_month() != "May")
        cout << "Error: the month's name is not March" << endl;
    if(trans_list_three.average_transaction() != 244.5475)
        cout << "Error: the average is not 244.5474" << endl;
    return 0;
}
