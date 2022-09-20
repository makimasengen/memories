#include <iostream>

using namespace std;

main(){

    int ipan, upan, a;
    cin >> ipan >> upan >> a;

    if(a % ipan == 0 && a % upan == 0)
    {
        cout << "Both Ipan's and Upan's lucky number";
    }
        else if (a % ipan == 0)
        {
            cout << "Ipan";
        }
        else if (a % upan == 0)
        {
            cout << "Upan";
        }
    else
    {
        cout << "No one's lucky number";
    }
}
