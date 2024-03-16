#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    copy(a, a + n, b);
    sort(a, a + n);
    ll k;
    cin >> k;
    for (ll i = 0; i < k; i++)
    {
        ll t, l, r, sum = 0;
        cin >> t >> l >> r;
        if (t == 1)
        {
            for (ll i = l - 1; i <= r - 1; i++)
            {
                sum += b[i];
            }
        }
        else
        {
            for (ll i = l - 1; i <= r - 1; i++)
            {
                sum += a[i];
            }
        }
        cout << sum << endl;
    }
}