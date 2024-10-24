#include <iostream>

using namespace std;

// 90 Degree

int main()
{
    // int a[3][3]= { {1,2,3}, {4,5,6}, {7,8,9}};

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
    
    cout << endl;

    for (int j = 0; j < col; j++)
    {
        for (int i = row - 1; i >= 0; i--)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
    
}