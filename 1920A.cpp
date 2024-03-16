#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k = 0, a = 0, b = 1000000000;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (x == 1)
            {
                a = max(a, y);
            }
            else if (x == 2)
            {
                b = min(b, y);
            }
            else if (x == 3)
            {
                v.push_back(y);
            }
        }
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] >= a && v[i] <= b)
            {
                k++;
            }
        }
        if ((b - a - k + 1) <= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b - a - k + 1 << endl;
        }
    }
}