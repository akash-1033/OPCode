#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        char a, b, d;
        cin >> s;
        ll c = 1, k = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (c == 1)
            {
                a = s[i];
                c = 2;
                k++;
                // cout << k;
            }
            else if (c == 2 && s[i] != a)
            {
                b = s[i];
                c = 3;
            }
            else if (c == 3 && s[i] != b && s[i] != a)
            {
                // cout << i;
                d = s[i];
                c = 4;
            }
            else if (c == 4 && s[i] != a && s[i] != d && s[i] != b)
            {
                // cout << i;
                a = s[i];
                b = '0';
                d = '0';
                c = 2;
                k++;
                // cout << k;
            }
            else
            {
                continue;
            }
        }
        cout << k << endl;
    }
}