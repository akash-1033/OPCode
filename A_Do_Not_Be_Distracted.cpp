#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        char ch = s[0];
        for (ll i = 1; i < n; i++)
        {
            if (ch != s[i])
            {
                ll c = count(s.begin() + i, s.end(), ch);
                if (c > 0)
                {
                    cout << "NO" << endl;
                    goto l;
                }
                ch = s[i];
            }
        }
        cout << "YES" << endl;
    l:;
    }
}