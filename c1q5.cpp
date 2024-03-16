#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        ll a[n + 1];
        map<ll, ll> mp;
        mp[0] = 1;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                ans += a[i];
            if (i % 2 == 1)
                ans -= a[i];
            if (mp[ans] > 0)
            {
                cout << "YES" << endl;
                goto Label;
            }
            mp[ans]++;
        }
        cout << "NO" << endl;
    Label:;
    }
}