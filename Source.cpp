#include <string>
#include <iostream>

using namespace std;





int main()
{
    char s[1001];


    cin.getline(s, 1001);

    int len = strlen(s);

    char ans[1001];
    for (int i = 0; i < len; i++)
    {
        if (i >= 2 && s[i - 2] == '.' && s[i - 1] == ' ' && ('a' <= s[i] && s[i] <= 'z'))
        {
            ans[i] = s[i] - 'a' + 'A';
        }
        else
        {
            ans[i] = s[i];
        }
    }

    ans[len] = '\0';
    cout << ans;
    




    return 0;
}