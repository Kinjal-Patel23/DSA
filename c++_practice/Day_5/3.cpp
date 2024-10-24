#include <iostream>

using namespace std;

int main()
{
    int maths, science, english, avg;

    cout << "Enter the marks of Maths: ";
    cin >> maths;

    if (maths > 0)
    {
        if (maths < 100)
        {
            cout << "Enter the marks of Science: ";
            cin >> science;

            if (science > 0)
            {
                if (science < 100)
                {
                    cout << "Enter the marks of English: ";
                    cin >> english;

                    if (english > 0)
                    {
                        if (english < 100)
                        {
                            cout <<"Mark is valid" << endl;

                            avg = (maths + science + english) / 3;

                            cout << "Average is: " <<avg;
                        }
                        else
                        {
                            cout << "Enter the valid marks of English...";
                        }
                        
                    }
                    else
                    {
                        cout << "Enter the valid marks of English...";
                    }
                    
                }
                else
                {
                    cout << "Enter the valid marks of science...";
                }
                
            }
            else
            {
                cout << "Enter the valid marks of science...";
            }
            
        }
        else
        {
            cout << "Enter the valid marks of Maths...";
        }
        
    }
    else
    {
        cout << "Enter the valid marks of Maths...";
    }
    
}