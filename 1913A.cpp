#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, a, b;
        cin >> s;
        ll n = s.length();
        for (ll i = 1; i < n; i++)
        {
            if (s[i] != '0')
            {
                a = s.substr(0, i);
                b = s.substr(i, n - i);
                ll x = stoll(a);
                ll y = stoll(b);
                if (x < y)
                {
                    cout << x << " " << y << endl;
                    goto l;
                }
            }
        }
        cout << -1 << endl;
    l:;
    }
}