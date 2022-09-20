#include <iostream>

using namespace std;

int main()
{
    int days, week, year, tempday;

    cin >> days;

    year = days / 365; //

    week = (days - 365) / 7  ;


    days = days - 365 - (week * 7);

    cout << year << " Year(s)" << week << " Week(s)" << days << " Day(s)";

}
