#include <iostream>

using namespace std;

// Transpose


int main()
{
    int i, j, row, col;

    int a[2][3]= { {2,4,7},{5,9,1} };

    // cout << "Enter the size of row: ";
    // cin >> row;

    // cout << "Enter the size of col: ";
    // cin >> col;

    // int a[row][col];


    cout << endl;

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }

    cout << endl;
    
    for (j = 0; j < 3; j++)
    {
        for ( i = 0; i < 2; i++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
    
    
}