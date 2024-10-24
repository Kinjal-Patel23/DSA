#include <iostream>

using namespace std;

int main()
{
    float p, r, n, interest;

    cout << "Enter the value of principal amount: ";
    cin >> p;

    cout << "Enter the value of rate: ";
    cin >> r;

    cout << "Enter the value of time: ";
    cin >> n;

    interest = (p * r * n) / 100;

    cout << "Interest is: " << interest;
}