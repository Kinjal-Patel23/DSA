#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter the number of A: ";
    cin >> a;

    if (a > 0)
    {
        cout << "Number is Positive";
    }
    else if (a == 0)
    {
        cout << "Number is Neutral";
    }
    else
    {
        cout << "Number is Negative";
    }
    
    
}