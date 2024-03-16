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
        cin >> s;
        ll p = 0, r = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (i < 3)
            {
                p += (ll)(s[i] - 48);
            }
            else
            {
                r += (ll)(s[i] - 48);
            }
        }
        if (p == r)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}