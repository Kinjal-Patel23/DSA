#include <iostream>

using namespace std;

// 1
// 1 2 
// 1 2 3
// 1 2 3 4

int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    
}