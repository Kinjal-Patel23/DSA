#include <iostream>

using namespace std;

int main()
{
    float b, h, area;

    cout << "Enter the base of the triangle: ";
    cin >> b;

    cout << "Enter the height of the triangle: ";
    cin >> h;

    area = (b * h) / 2;

    cout << "Area of the triangle is: " << area;
}