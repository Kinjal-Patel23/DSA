#include <iostream>

using namespace std;

// 1 10 11 20 21
// 2 9  12 19 22
// 3 8  13 18 23
// 4 7  14 17 24
// 5 6  15 16 25


int main() {
    
    int a;

    for (int row = 1; row <= 5; row++) 
    {
        for (int col = 1; col <= 5; col++) 
        {
                                    
            a = (col - 1) * 5 + row; //odd

            if (col % 2 == 0) 
            {
                a = col * 5 - row + 1; //even
            }
            cout << a << "\t";
        }
        cout << endl;
    }
}

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         int num1 = i;
//         int num2 = 10 - i + 1;
//         int num3 = i + 10;
//         int num4 = 20 - i + 1;
//         int num5 = i + 20;

//         cout << num1 << "\t" << num2 << "\t" << num3 << "\t" <<num4 << "\t" << num5 << endl;
//     }
    
// }

// ---------------------------------------

// int rows, cols, i, j, a;
    
//     cout << "Enter the size of row: ";
//     cin >> rows;
    
//     cout << "Enter the size of col: ";
//     cin >> cols;
    
//     for(i = 1; i <= rows; i++)
//     {
//         for(j = 1; j <= cols; j++)
//         {
//             a = (j - 1) * rows + i;
            
//             if(j % 2 == 0)
//             {
//                 a = j * rows - i + 1;
//             }
//             cout << a << "\t";
            
//         }
//         cout << endl;
//     }
