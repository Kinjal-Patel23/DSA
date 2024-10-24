#include <iostream>

using namespace std;

//       *
//     * * *
//   * * * * *

int main()
{
    for (int row = 1; row <= 3; row++)
    {
        for (int space = 3; space >= row - 1; space--)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout <<"*";
        }
        for (int col = row - 1  ; col >= 1; col--)
        {
            cout <<"*";
        }
         
        cout <<endl;
    }
    
}