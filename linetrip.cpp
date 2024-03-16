#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll k = n + 2, z = 0;
        ll a[k];
        a[0] = 0;
        a[k - 1] = x;
        for (ll i = 1; i < k - 1; i++)
        {
            cin >> a[i];
            ll m = a[i] - a[i - 1];
            z = max(z, m);
        }
        z = max(z, 2 * (a[k - 1] - a[k - 2]));
        cout << z << endl;
    }
}