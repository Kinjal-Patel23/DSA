#include <iostream>

using namespace std;

int main()
{
    int user, size = 0;

    cout << "Enter array size: ";
    cin >> user;

    int a[100];

    for (int i = 0; i < user; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        size++;
    }

    int ope, pos, upd, v;

    do
    {
        cout << endl;
         
        cout << "1. INSERT" << endl;
        cout << "2. UPDATE" << endl;
        cout << "3. VIEW" << endl;
        cout << "4. DELETE" << endl;
        
        cout << "-------------------------" << endl;

        cout << "Enter number for any operation: ";
        cin >> ope;

        cout << "---------------------------------" << endl;
        
        switch (ope)
        {
            case 1:
                cout << "---------- INSERT ---------" << endl; 
                cout << endl;
                cout << "Enter position number: ";
                cin >> pos;

                cout << "Enter new value: ";
                cin >> v;

                for (int i = size; i > pos; i--)
                {
                    a[i] = a[i - 1];
                }

                a[pos] = v;
                size++;
                
                cout << "Inserted successfully...!! a[" << pos <<"] = " << v << endl;
                cout << endl;
                cout << "-----------------------------------------" << endl;
                break;
        
            case 2:
                cout << "---------- UPDATE ----------" << endl;
                cout << endl;
                cout << "Enter position number: ";
                cin >> pos;
                
                cout << "Enter updated number: ";
                cin >> upd;

                a[pos] = upd;

                cout << "Update successfully....!! a[" << pos <<"] = " << upd << endl;
                cout << endl;
                cout << "-----------------------------------------" << endl;
                break;
        
            case 3:
                cout << "---------- VIEW ----------" << endl;
                cout << endl;
                
                for(int i = 0; i < size; i++) 
                {
                    cout << "a[" << i << "] = " << a[i] << endl;
                }
                
                cout << endl;
                cout << "-----------------------------------------" << endl;
                break;
        
            case 4:
                cout << "---------- DELETE ----------" << endl;

                cout << "Enter position number: ";
                cin >> pos;

                for (int i = pos; i < size; i++)
                {
                    a[i] = a[i + 1];
                }
                
                size--;
                cout << "a[" << pos << "] is Delete successfully";
                cout << endl;
                cout << "-----------------------------------------" << endl;
                break; 

            case 0:
                cout << "Exit......" << endl;   
                break;    
            
            default:
                cout << "Please enter valid operation number......" << endl;;
                break;
        }

    }while(ope != 0);
    
    
}