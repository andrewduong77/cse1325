#include "Stock_boy.h"

class Clerk : public Stock_boy
{
public:
    Clerk(string n, int i, double pr) : Stock_boy(n, i, pr) {};
private:
};
