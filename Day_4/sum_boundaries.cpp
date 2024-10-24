#include <iostream>

using namespace std;

int main()
{
    int row, col, i, j, sum = 0;

    cout << "Enter the size of row: ";
    cin >> row;

    cout << "Enter the size of col: ";
    cin >> col;

    cout << endl;

    int a[row][col];

    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "a[" << i <<"] [" << j <<"]: ";
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
                if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
                {
                    sum = sum + a[i][j];
                }
                
            }
            
        }
        cout << "The sum of boundary elements is: " << sum;
         
    }
    
    
    
}
