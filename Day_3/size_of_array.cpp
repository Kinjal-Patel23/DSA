#include <iostream>

using namespace std;

int main()
{
    int a[8] = {7, 8, 3, 5, 2, 7, 9, 1};
    
    int size = sizeof(a) / sizeof(a[0]);
    cout << "size of array:"<< size << endl << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    
    
}