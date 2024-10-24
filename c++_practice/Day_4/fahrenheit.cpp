#include <iostream>

using namespace std;

int main()
{
    float f, c;

    cout << "Enter the value of celsius: ";
    cin >> c;

    f = (c * 9 / 5) + 32;

    cout << "Fahrenheit is: " << f;
    
}