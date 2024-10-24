#include <iostream>

using namespace std;


int main()
{
    int row, col;
    float total, avg, sum = 0;

    cout << "Enter the size of row : ";
    cin >> row;

    cout << "Enter the size of col: ";
    cin >> col;
    
    cout << endl;

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "] [" << j << "] : ";
            cin >> a[i][j];
            sum = sum + a[i][j];
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
    
    cout << "Sum of :" << sum << endl;

    total = row * col;
    avg = sum / total;
    cout << "Average of :" << avg;
     
}


