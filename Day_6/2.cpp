#include <iostream>

using namespace std;

//set entire matrix row and col as zeroes

int main() {
    int a[3][3] = { {2, 4, 5}, {5, 0, 7}, {8, 5, 2} };
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << a[i][j] << " ";        

        }
        cout << endl;
    }
    cout << endl;
    
   
    for (int i = 0; i < 3; i++) 
    {
        a[i][1] = 0; 
    }


    for (int j = 0; j < 3; j++)
    {
        a[1][j] = 0; 
    }


    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
<<<<<<< HEAD
    
=======
>>>>>>> b0b09f9f1a812356039ec99cf823023073582751
}

// int main()
// {
//     int row, col;

//     cout << "Enter the size of row: ";
//     cin >> row;

//     cout << "Enter the size of col: ";
//     cin >> col;

//     int a[row][col];

//     cout << endl;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << "a[" << i <<"][" << j <<"]: ";
//             cin >> a[i][j];
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     int zeroRow, zeroCol;

//     cout << "Enter the row to set zero: ";
//     cin >> zeroRow;

//     cout << endl;

//     cout << "Enter the col ro set zero: ";
//     cin >> zeroCol;

//     cout << endl;

//     for (int i = 0; i < row; i++)
//     {
//         a[i][zeroCol] = 0;
//     }

//     for (int j = 0; j < col; j++)
//     {
//         a[zeroRow][j] = 0;
//     }
    
//     cout << endl;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
    
// }
