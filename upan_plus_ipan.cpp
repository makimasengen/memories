#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//basic * coeff + allowance;
int main()
{
    double a, b, c, P, S, p;
    cin >> a;
    cin >> b;
    cin >> c;

    P = a + b + c; //Chu vi
    p = P / 2;
    S = sqrt(p * (p -a ) * (p - b) * (p -c )); //Dien tich

    cout << fixed << setprecision(2) << P << " " << S;
}
