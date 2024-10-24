#include <iostream>

using namespace std;

int main()
{
   int mark;

   cout << "Enter the marks: ";
   cin >> mark;

   if (85 < mark)
   {
        cout << "A";
   }
   else if (mark >= 70 && mark < 85)
   {
        cout << "B";
   }
   else if (mark >= 45 && mark < 70)
   {
        cout << "C";
   }
   else if (mark < 45)
   {
        cout << "D";
   }
   else
   {
        cout << "E";
   }
   
}