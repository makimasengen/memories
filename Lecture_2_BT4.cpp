#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    int year;

    cin >> year;
    //True when % 400 == 0 and  (% 4 == 0 && != 0)

    if (year % 400 == 0)
        cout << "YES";
    else if (year % 4 == 0 && year % 100 != 0)
        cout << "YES";
    else
        cout << "NO";

}

