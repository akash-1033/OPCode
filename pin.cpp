#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll o = 1, sum;
        string s;
        cin >> s;
        ll a = (ll)(s[0] - 48);
        ll b = (ll)(s[1] - 48);
        ll c = (ll)(s[2] - 48);
        ll d = (ll)(s[3] - 48);
        if (a == 0)
        {
            a = 10;
        }
        if (b == 0)
        {
            b = 10;
        }
        if (c == 0)
        {
            c = 10;
        }
        if (d == 0)
        {
            d = 10;
        }
        sum = abs(a - o) + abs(b - a) + abs(c - b) + abs(d - c) + 4;
        cout << sum << endl;
    }
}