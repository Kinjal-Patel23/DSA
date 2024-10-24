#include <iostream>

using  namespace std;

int main()
{
    const float pi = 3.14;
    float r, area;

    cout << "Enter the radious of the circle:";
    cin >> r;

    area = (pi * r * r);

    cout << "Area of the circle is: "<<area;


}