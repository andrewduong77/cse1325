//#include "Stock_boy.h"
//#include "Sales.h"
//#include "Manager.h"
#include "SalesManager.h"
#include "Clerk.h"
#include <iostream>
#include <vector>

int main()
{
    Employee *e = new Stock_boy("Stocky_boi", 789, 7.25);
    cout << e->get_name() << endl;
    cout << e->pay(1000) << endl;
    ((Stock_boy *)e)->add_hours(41);
    cout << e->pay(1000) << endl;

    vector<Employee*> staff;
    staff.push_back(e);
    staff.push_back(new Clerk("Clark", 790, 8.25));
    staff.push_back(new Sales("Sales", 791, 0.02));

    vector<Stock_boy> numbers;
    numbers.emplace_back("q", 456, 456);
    /*//Employee jeff {"Jeff", 1234567890};

    //cout << jeff.pay(100) << endl;

    Stock_boy squirtle {"Squirtle", 987654321, 10};
    squirtle.add_hours(40);
    cout << squirtle.get_name() << endl;
    cout << squirtle.pay(0) << endl;


    Sales saley_boi {"Saley_boi", 1337, 0.01};
    saley_boi.add_sales(200000.00);
    cout << saley_boi.pay(20) << endl;

    Manager CEO {"Jeff Bezos", 741852963, 81840.00};
    cout << CEO.pay(1600000) << endl;

    cout << squirtle.pay(1000) << endl;

    SalesManager bob {"Bob", 8541987, .02, 300};
    cout << bob.pay(0) << endl;
    bob.add_sales(1000000);
    cout << bob.pay(65) << endl;

    Clerk clark {"Clark Kent", 894168598, 12};
    clark.add_hours(4);
    cout << clark.pay(52) << endl;*/
}
