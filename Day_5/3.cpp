#include <iostream>

using namespace std;

// Find Maximum Number

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
            cout << "a[" << i <<"][" << j <<"]: ";
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
    
    int maxNum = a[0][0], i, j;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > maxNum)
            {
                maxNum = a[i][j];
            }
        }
        cout << endl;
    }

    cout << "Maximum Number is: " << maxNum << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == maxNum)
            {
                cout << "Position Number is : a[" << i << "][" << j <<"]";
            }
            
        }
    
    }

    
    
}