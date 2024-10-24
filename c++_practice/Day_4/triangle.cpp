#include <iostream>

using namespace std;

int main()
{
    float angle1, angle2, angle3;

    cout << "Enter the angle1: ";
    cin >> angle1;

    cout << "Enter the angle2: ";
    cin >> angle2;

    angle3 = 180 - (angle1 + angle2);

    cout << "Angle3 is: " << angle3;
}