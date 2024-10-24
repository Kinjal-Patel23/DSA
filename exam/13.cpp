#include <iostream>

using namespace std;

// calculating the sum of digits

int main()
{
    int n, sum;

    cout << "Enter any number: ";
    cin >> n;

    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;

    }
    
    cout << "Sum of digit: " << sum;
}