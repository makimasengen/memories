#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d, max;
    cin >> a >> b >> c >> d;
    if (a > b)
    {
      	max = a;
    }
      	else{
        max = b;
        }
    if (max < c)
    {
        max = c;
    }
    if (max < d)
    {
        max = d;
    }
    cout << max;
}
