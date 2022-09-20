#include <iostream>

using namespace std;

int main()
{
    int  price;
    float hour;
    cin >> hour;

    if (hour <= 4)
    {
        cout << "5000";
    }
    else{
        price = 5000 + (4000 * ((hour - 4)/2));
        cout << price;
    }
}
