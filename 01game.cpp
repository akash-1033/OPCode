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
        ll x = 0, y = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        ll k = min(x, y);
        if (k % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}