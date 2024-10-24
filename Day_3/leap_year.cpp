#include <iostream>

using namespace std;

//leap year or not

int main()
{
    int start, end;

    cout << "Enter the start year: ";
    cin >> start;

    cout << "Enter the end year: ";
    cin >> end;

    int size = end - start + 1;

    for (int i = 0; i < size; i++)
    {
         if (start % 4 == 0)
         {
            cout << start << endl;
         }

        start ++ ;
         
    }      
}