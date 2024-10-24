#include <iostream>

using namespace std;

//Average of Array

int main()
{
    int n, sum = 0;
    float avg;

    cout << "Enter any number: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i <<"] = ";
        cin >> a[i];
        sum = sum + a[i];
        
    }
    
    avg = sum / n;
    
    cout << "Sum of Array: " << sum << endl;
    cout << "Average of array: " << avg;
}