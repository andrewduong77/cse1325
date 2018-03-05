#include "Stock_boy.h"
#include "Sales.h"
#include "Manager.h"
#include <iostream>

int main()
{
    Employee jeff {"Jeff", 1234567890};
    
    cout << jeff.pay(100) << endl;
    
    Stock_boy squirtle {"Squirtle", 987654321, 10};
    squirtle.add_hours(40);
    cout << squirtle.get_name() << endl;
    cout << squirtle.pay() << endl;
    
    
    Sales saley_boi {"Saley_boi", 1337, 0.01};
    saley_boi.add_sales(200000.00);
    cout << saley_boi.pay() << endl;
    
    Manager CEO {"Jeff Bezos", 741852963, 81840.00};
    cout << CEO.pay() << endl;
    
    cout << squirtle.pay(1000) << endl;
}
