#include <iostream>

using namespace std;

int main()
{
    int i, j, row, col, n, sumRow = 0, sumCol = 0;

    cout << "Enter the size of row: ";
    cin >> row;

    cout << "Enter the size of col: ";
    cin >> col;

    cout << endl;

    int a[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "a[" << i <<"][" << j <<"]: ";
            cin >> a[i][j];
        }
        cout << endl;
    }
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }

    cout << endl;

    int rowIndexNum, colIndexNum;

    cout << "Enter the row index: ";
    cin >> rowIndexNum;

    if (rowIndexNum >= 0 && rowIndexNum < row)
    {
        for (j = 0; j < col; j++)
        {
            sumRow = sumRow + a[rowIndexNum][j];
        }
        
        cout << "Sum of Row: " << sumRow;
    }
    else
    {
        cout << "Invalid row index...";
    }

    cout << endl;

    cout << "Enter the col index: ";
    cin >> colIndexNum;

    if (colIndexNum >= 0 && colIndexNum < col)
    {
        for (i = 0; i < row; i++)
        {
            sumCol = sumCol + a[i][colIndexNum];
        }
        
        cout << "Sum of Col: " << sumCol;
    }
    else
    {
        cout << "Invalid col index...";
    }
    
    
}