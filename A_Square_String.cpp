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
        ll n = s.length();
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (ll i = 0; i < n / 2; i++)
            {
                if (s[i] != s[n / 2 + i])
                {
                    cout << "NO" << endl;
                    goto l;
                }
            }
            cout << "YES" << endl;
        l:;
        }
    }
}