#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        ll x = count(s.begin(), s.end(), '0');
        ll y = count(s.begin(), s.end(), '1');
        // if (x % 2 == 0)
        // {
        //     c = x / 2;
        // }
        // else
        // {
        //     c = x / 2 + 1;
        // }
        // if (y % 2 == 0)
        // {
        //     d = y / 2;
        // }
        // else
        // {
        //     d = y / 2 + 1;
        // }
        // ll mx = x * a + b;
        // for (ll i = 1; i < x; i++)
        // {
        //     sum += ((x - i) * a) + b;
        //     sum += i * a + b;
        //     mx = max(mx, sum);
        //     sum = 0;
        // }
        // ll mz = y * a + b;
        // for (ll i = 1; i < y; i++)
        // {
        //     sum += (y - i) * a + b;
        //     sum += (i)*a + b;
        //     mz = max(mz, sum);
        //     sum = 0;
        // }
        // cout << mx + mz << endl;
    }
}