#include <iostream>

using namespace std;

main()
{
    int month;
    cin >> month;
    if (month == 1 || month <=3)
    {
        cout << "Quy 1";
    }
    else if(month == 4 || month <= 6)
    {
        cout << "Quy 2";
    }
    else if(month == 7 || month <= 9)
    {
        cout << "Quy 3";
    }
    else
    {
        cout << "Quy 4";
    }
}
