    #include <iostream>

    using namespace std;

    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    // 11 12 13 14 15
    // 16 17 18 19 20 21
    // 22 23 24 25 26 27 28....

    int main()
    {
        int user;
        int counter = 1;

        cout << "Enter any Number: ";
        cin >> user;

        for (int row = 1; row <= 100000000; row++)
        {
            if (counter <= user)
            {
                for (int col = 1; col <= row; col++)
                {
                    if (col <= counter)
                    {
                        if (counter > user)
                        {
                            break;
                        }
                        else
                        {
                            cout << counter <<" ";
                            counter++;
                        }
                    }
                    else
                    {
                        break;
                    }
                    
                }
                
            }
            else
            {
                break;
            }
            cout<< endl;
        }
        
    }