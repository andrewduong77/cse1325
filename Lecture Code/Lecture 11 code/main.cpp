#include "Stock_boy.h"
#include "Sales.h"
#include "Manager.h"
#include "SalesManager.h"
#include "Clerk.h"
#include <iostream>

int main()
{
    Employee jeff {"Jeff", 1234567890};

    cout << jeff.pay(100) << endl;

    Stock_boy squirtle {"Squirtle", 987654321, 10};
    squirtle.add_hours(40);
    cout << squirtle.pay() << endl;
    cout << squirtle.get_name() << endl;
    cout << squirtle.name << endl;

    Sales saley_boi {"Saley_boi", 1337, 0.01};
    saley.boi.add_sales(200000.00);
    cout << saley_boi.pay() << endl;

    Manager CEO {"Jeff Bezos", 741852963, 81840.00};
    cout << CEO.pay() << endl;

    cout << squirtle.pay(1000) << endl;

    SalesManager bob {"Bob", 8541987, .02, 300};
    cout << bob.pay() << endl;
    bob.add_sales(1000000);
    cout << bob.pay() << endl;

    Clerk clark {"Clark Kent", 894168598, 12};
    clark.add_hours(4);
    cout << clark.pay() << endl;
}
