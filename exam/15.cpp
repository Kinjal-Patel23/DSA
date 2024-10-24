#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int length;

    cout << "Enter any String: ";
    cin >> a;

    length = a.length();

    cout << "String length is: " << length;
}