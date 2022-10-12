// Checking_Date.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    int month, year;

    cin >> month >> year;
    //1 <= month <= 12
    if (1 <= month && month <= 12)
    {
        switch (month) 
        {
            case 2:
                if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                {
                    cout << "29";
                    break;
                }
                else
                {
                    cout << "28";
                    break;
                }

            case 4:
                cout << "30";
                break;
            case 6:
                cout << "30";
                break;
            case 9:
                cout << "30";
                break;
            case 11:
                cout << "30";
                break;
            default:
                cout << "31";
                break;
        }        
    }
    else
    {
        cout << "INVALID";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
