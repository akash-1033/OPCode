#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, c = "codeforces";
        cin >> s;
        ll n = 0;
        for (ll i = 0; i < 10; i++)
        {
            if (s[i] != c[i])
            {
                n++;
            }
        }
        cout << n << endl;
    }
}