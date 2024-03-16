#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    ll t[n], f[n], r[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> f[i] >> t[i];
        if (t[i] <= k)
        {
            r[i] = f[i];
        }
        else
        {
            r[i] = f[i] - (t[i] - k);
        }
    }
    sort(r, r + n);
    cout << r[n - 1];
}