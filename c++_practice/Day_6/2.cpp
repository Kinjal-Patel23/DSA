#include <iostream>

using namespace std;

int main()
{
    int user, userEnglish, userHindi, userGujarati;

    cout << "Press 1 for English" << endl;
    cout << "Press 2 for Hindi" <<endl;
    cout << "Press 3 for Gujarati" <<endl;

    cout << "-----------------------------" <<endl;
    cin >> user;
    cout << "-----------------------------" <<endl;

    switch (user)
    {
    case 1:
        cout << "Press 1 for Internet Recharge" <<endl;
        cout << "Press 2 for top-up Recharge" <<endl;
        cout << "Press 3 for Specisl Recharge" <<endl;

        cout << "-------------------------------------" <<endl;
        cin >> userEnglish;
        cout << "-------------------------------------" <<endl;

        switch (userEnglish)
        {
        case 1:
            cout << "You have successfully done a internet recharge.";
            break;

        case 2:
            cout << "You have successfully done a top-up recharge.";
            break;

        case 3:
            cout << "You have successfully done a special recharge.";
            break;
        
        default:
            cout << "Invalid Number. Please try again....";
            break;
        }
        break;

    case 2:
        cout << "Internet Recharge ke liye 1 dabaiye" <<endl;
        cout << "Top-up Recharge ke liye 2 dabaiye" <<endl;
        cout << "Special Recharge ke liye 3 dabaiye" <<endl;

        cout << "-------------------------------------" <<endl;
        cin >> userHindi;
        cout << "-------------------------------------" <<endl;

        switch (userHindi)
        {
        case 1:
            cout << "Aapne safaltapurvak Internet Recharge kar liya he.";
            break;

        case 2:
            cout << "Aapne safaltapurvak To-up Recharge kar liya he.";
            break;

        case 3:
            cout << "Aapne safaltapurvak Special Recharge kar liya he.";
            break;
        
        default:
            cout << "Invalid Number. Please try again....";
            break;
        }
        break;

    case 3:
        cout << "Internet Recharge mate 1 dabavo" <<endl;
        cout << "Top-up Recharge mate 2 dabavo" <<endl;
        cout << "Special Recharge mate 3 dabavo" <<endl;

        cout << "-------------------------------------" <<endl;
        cin >> userGujarati;
        cout << "-------------------------------------" <<endl;

        switch (userGujarati)
        {
        case 1:
            cout << "Tame safaltapurvak Internet Recharge karyu chhe.";
            break;

        case 2:
            cout << "Tame safaltapurvak Top-up Recharge karyu chhe.";
            break;

        case 3:
            cout << "Tame safaltapurvak Special Recharge karyu chhe.";
            break;
        
        default:
            cout << "Invalid Number. Please try again....";
            break;
        }
        break;

    
    default:
        cout << "Invalid Number. Please try again...";
        break;
    }


}