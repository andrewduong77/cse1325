#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> a {1,2,3,4,5,6,7,8,9,10};
    
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    
    //code for for-each loop here
    
    for (int j : a)
    {
        cout << j << endl;
    }
   
}
