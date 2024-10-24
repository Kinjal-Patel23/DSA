#include <iostream>

using namespace std;

int n;

int fact()
{
    int factNum = 1;


    for (int i = 1; i <= n; i++)
    {
        factNum = factNum * i;
    }
    

    return factNum;
}

int main()
{
    
    cout << "Enter any number: ";
    cin >> n;

    cout << "Factorial is:" << fact();
}