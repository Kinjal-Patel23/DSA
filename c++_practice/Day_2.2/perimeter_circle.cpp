#include <iostream>

using namespace std;

int main()
{
    const float pi = 3.14;
    float r, perimeter;

    cout << "Enter the radiour of the circle: ";
    cin >> r;

    perimeter = (2 * pi * r);

    cout << "Perimeter of: " << perimeter;
}