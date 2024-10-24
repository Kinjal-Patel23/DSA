#include <iostream>

using namespace std;

int main()
{
    int x, y, ans;

    cout << "Enter the value of X: ";
    cin >> x;

    cout << "Enter the value of Y: ";
    cin >> y;

    ans = ((x * x * x) + (3 * x * x * y) + (3 * x * y * y) + (y * y * y));

    cout << "Answer is: "<<ans;
}