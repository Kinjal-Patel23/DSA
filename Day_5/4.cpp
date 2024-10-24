#include <iostream>

using namespace std;

// 2D array to 1D array

int main()
{
    int row, col;

    cout << "Enter the size of row: ";
    cin >> row;

    cout << "Enter the size of col: ";
    cin >> col;

    cout << endl;

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
        cout << endl;
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
           
    }
    
    
}