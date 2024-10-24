#include <iostream>

using namespace std;

int multi()
{
    int a = 5, b = 4;

    int c = a * b;

    cout << "Multiplication is:" << c << endl;;
}

int div()
{
    int a = 30, b = 10;

    int c = a / b;

    cout << "Division is: " << c << endl;

    multi();
}

int main()
{
    div();
}