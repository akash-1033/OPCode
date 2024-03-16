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
    cout << abs(a[0] - a[1]) << " " << abs(a[0] - a[n - 1]) << endl;
    for (ll i = 1; i < n - 1; i++)
    {
        ll b = abs(a[i] - a[i + 1]);
        ll c = abs(a[i] - a[i - 1]);
        ll mn = min(b, c);
        cout << mn << " ";

        ll d = abs(a[i] - a[n - 1]);
        ll e = abs(a[i] - a[0]);
        ll mx = max(d, e);
        cout << mx << endl;
    }
    cout << abs(a[n - 1] - a[n - 2]) << " " << abs(a[n - 1] - a[0]) << endl;
}