#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int t = 1; t <= n; t++)
        {
            if (i == 1 || i == n || t == 1 || t ==n){
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
