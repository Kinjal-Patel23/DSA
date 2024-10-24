#include <iostream>

using namespace std;

int main()
{
    int x, y, sum;

    cout << "Enter the size of x array: ";
    cin >> x;

    cout << "Enter the size of y array: ";
    cin >> y;
    
    cout << endl;

    int a[x][y];
    int b[x][y];
    int c[x][y];

    cout << "Enter array A's element " << endl;;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "a[" << i <<"] [" << j <<"]: ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << "Enter array B's element " << endl;;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "b[" << i <<"] [" << j <<"]: ";
            cin >> b[i][j];
        }
        cout << endl;
    }


    cout << "Sum is: " << endl;;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << ",";
        }
        cout << endl;
    }
    
}