#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], pro = 1;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mn = a[0], z = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < mn)
            {
                z = i;
                mn = a[i];
            }
        }
        ll m = a[z] + 1;
        for (ll i = 0; i < n; i++)
        {
            if (i != z)
            {
                pro *= a[i];
            }
        }
        ll res = pro * m;
        cout << res << endl;
    }
}