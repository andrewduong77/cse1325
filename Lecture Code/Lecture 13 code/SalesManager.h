#include "Sales.h"
#include "Manager.h"

class SalesManager : public Sales, public Manager
{
public:
    SalesManager(string n, int i, double cr, int s): Sales(n, i, cr), Manager(n, i, s), Employee(n, i){};
    double pay(double);
private:

};
