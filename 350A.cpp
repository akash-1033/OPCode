#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b, b + m);
    ll q = a[0];
    ll w = a[n - 1];
    ll e = b[0];
    for (ll i = w; i < e; i++)
    {
        if (2 * q <= i)
        {
            cout << i;
            goto label;
        }
    }
    cout << "-1";
label:;
}