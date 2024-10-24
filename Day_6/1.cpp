#include <iostream>

using namespace std;

// Find the Position of Targeted Value

int main()
{
    int col, row;

    cout << "Enter the size of row: ";
    cin >> row;

    cout << "Enter the size of col: ";
    cin >> col;

    int a[row][col];

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i <<"][" << j << "]: ";
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

    int user;
    // bool found = false;

    cout << "Enter the array number to find: ";
    cin >> user;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (user == a[i][j])
            {
                cout << "position is: a[" << i <<"][" << j <<"]";
                // found = true;
            }
            cout << endl;
        }
        
    }
    
    
}
