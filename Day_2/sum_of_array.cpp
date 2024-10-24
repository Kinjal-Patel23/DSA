#include <iostream>

using namespace std;

//Sum of Array 

int main()
{
    int num, sum = 0;

    cout << "Enter any number: ";
    cin >> num;

    int a[num]; 

    for (int i = 0; i < num; i++)
    {
        cout << "a[" << i <<"] = ";
        cin >> a[i];
    }
    
    for (int i = 0; i < num; i++)
    {
        sum = sum + a[i];

    }
    
    cout << "Sum is: " << sum;
}