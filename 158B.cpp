#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll q = count(a, a + n, 1);
    ll w = count(a, a + n, 2);
    ll e = count(a, a + n, 3);
    ll r = count(a, a + n, 4);
    ll res = r;
    if (e >= q)
    {
        res += q;
        res += (e - q);
        q = 0;
    }
    else
    {
        res += e;
        q = q - e;
    }
    if ((2 * w + q) % 4 == 0)
    {
        res += (2 * w + q) / 4;
    }

    else
    {
        res += ((2 * w + q) / 4 + 1);
    }
    cout << res;
}