#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, q, r = 0;
    cin >> n >> q;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        r += a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        ll x, y, s = 0;
        cin >> x >> y;
        if (y == n)
        {
            cout << r << endl;
        }
        else
        {
            ll i = n - x;
            while (y--)
            {
                s += a[i];
                i++;
            }
            cout << s << endl;
        }
    }
}