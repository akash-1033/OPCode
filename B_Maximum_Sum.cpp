#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, w, sum = 0, mx = INT_MIN;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll e[n + 1];
        e[0] = sum;
        for (ll i = 1; i < n + 1; i++)
        {
            sum += a[i - 1];
            e[i] = sum;
        }
        for (ll i = 0; i < k + 1; i++)
        {
            ll j = k - i;
            mx = max(mx, e[n - j] - e[2 * i]);
        }
        cout << mx << endl;
    }
}