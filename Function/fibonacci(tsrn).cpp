#include <iostream>

using namespace std;


int fibo(int n)
{
    int v1 = -1, v2 = 1, v3;

    for (int i = 0; i < n; i++)
    {
        v3 = v1 + v2;

        cout << v3 << " ";

        v1 = v2;
        v2 = v3;
    }
}
  

int main()
{
    int n;

    cout << "Enter any number: ";
    cin >> n;

    fibo(n);

}