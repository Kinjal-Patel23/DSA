#include <iostream>

using namespace std;

int main()
{
    int x, y, ans;

    cout << "Enter the value of X: ";
    cin >> x;

    cout << "Enter the value of Y: ";
    cin >> y;

    ans = ((x * x) + (2 * x * y) + (y * y));

    cout << "Answer is: " <<ans;
}