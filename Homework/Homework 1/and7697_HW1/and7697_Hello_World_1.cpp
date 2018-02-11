#include <iostream>
using namespace std;

int main() {
  cout << "Hello User" << endl;
  cout << "Please enter your name: ";
  string name;
  cin >> name;
  cout << "Your name is " << name << "." << endl;
  cout << "Please enter two integers separated by a space: ";
  int a, b;
  cin >> a >> b;
  cout << "The sum of " << a << " and " << b << " is " << a + b << "." << endl;
  cout << "The difference of " << a << " and " << b << " is " << a - b << "." << endl;
  cout << "The product of " << a << " and " << b << " is " << a * b << "." << endl;
  if(b == 0)
    cout << "The quotient of " << a << " and " << b << " returned an undefined value." << endl;
  else
    cout << "The quotient of " << a << " and " << b << " is " << a / b << "." << endl;
  cout << "Please enter two doubles separated by a space: ";
  double c, d;
  cin >> c >> d;
  cout << "The sum of " << c << " and " << d << " is " << c + d << "." << endl;
  cout << "The difference of " << c << " and " << d << " is " << c - d << "." << endl;
  cout << "The product of " << c << " and " << d << " is " << c * d << "." << endl;
  if(d == 0)
    cout << "The quotient of " << c << " and " << d << " returned an undefined value." << endl;
  else
    cout << "The quotient of " << c << " and " << d << " is " << c / d << "." << endl;
  cout << "Thank you for your time " << name << "." << endl;
  return 0;
}
