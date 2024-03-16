#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0, m = 0;
        cin >> n;
        string s;
        cin >> s;
        char d = s[0];
        for (ll i = 0; i < n; i++)
        {
            if (d == s[i])
            {
                c++;
                m = max(m, c);
            }
            else
            {
                c = 1;
                d = s[i];
            }
        }
        cout << m + 1 << endl;
    }
}