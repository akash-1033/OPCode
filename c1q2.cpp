#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        char s[3][3];
        for (ll i = 0; i < 3; i++)
        {
            ll sum = 0;
            for (ll j = 0; j < 3; j++)
            {
                cin >> s[i][j];
                sum += s[i][j];
            }
            if (sum == 198)
            {
                continue;
            }
            else
            {
                cout << (char)(198 - (sum - 63)) << endl;
            }
        }
    }
}