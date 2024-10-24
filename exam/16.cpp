#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter any number:";
    cin >> a;

    if (a == 0)
    {
        cout << "ZERO";
    }
    else
    {
        cout << "You entered:" << a;
    }
}