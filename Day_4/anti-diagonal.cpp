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
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                cout << "a[" << i <<"] [" << j <<"]: ";
                cin >> a[i][j];   
            }

            cout << endl;
        }


        for (i = 0; i < row; i++)
        {
            for (j = col - 1; j >= 0; j--)
            {
                cout << a[i][j] << "   ";
            }

            cout << endl;
        }
        
        cout << endl;

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                cout << a[i][j] << "   ";
            }
            
            cout << endl;
        }

        cout << endl;

        for (i = 0; i < row; i++)
        {
            sum = sum + a[i][i];
        }

        cout << "Anti-Diagonal sum is: " << sum;
    }
    
}