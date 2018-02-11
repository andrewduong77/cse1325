#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    string first_name;
    string last_name;
    int id;

    cout << "Enter Your Name and ID" << endl;
    
    cin >> first_name >> id;
    
    cout << "Your name is " << first_name << " " << id << endl;
    
    vector<int> v1;
    int a;
    
    for( int i = 0; i < 5; i++)
    {
        cout << "input a number" << endl;
        cin >> a;
        v1.push_back(a);
    }
    
    cout << v1.size() << endl;
    
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }
    
    return 0;

}
