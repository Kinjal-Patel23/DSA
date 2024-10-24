#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the value of A: ";
    cin >> a;

    cout << "Enter the value of B: ";
    cin >> b;

    cout << "Enter the value of C: ";
    cin >> c;

    (a < b) ? (a < c) ? cout << "A is MIN" : cout << "C is MIN" : (b < c) ? cout << "B is MIN" : cout << "C is MIN";
}