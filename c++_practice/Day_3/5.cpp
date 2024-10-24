#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter the value of A: ";
    cin >> a;

    cout << "Enter the value of B: ";
    cin >> b;

    a = a + b;

    b = a - b;

    a = a - b;

    cout << "Value of A: "  <<a <<endl;
    cout << "Value of B: " <<b;

}