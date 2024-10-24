#include <iostream>

using namespace std;

int main()
{
    int a, fact = 1;

    cout << "Enter any number: ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        fact = i * fact;
    }
    
    cout << "Factirial no is: " << fact;
}