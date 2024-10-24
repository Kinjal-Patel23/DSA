#include <iostream>

using namespace std;

//Two array sum

int main()
{
    int n;

    cout << "Enter any number: ";
    cin >> n;

    int a[n], b[n], c[n];

    cout << "Enter array A's element" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Enter array B's element" << endl;;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> b[i];
    }

    cout << "Sum is: ";
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i]; 
        cout << c[i] << ",";
    }
    
    
}