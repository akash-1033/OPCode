#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll Ceiling(ll arr[], ll s, ll e, ll target)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}

int main()
{
    ll t, n;
    cin >> t;
    ll a[t];
    for (ll i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    cin >> n;
    sort(a, a + t);
    while (n--)
    {
        ll q;
        cin >> q;
        ll x = Ceiling(a, 0, t - 1, q);
        cout << x << endl;
    }
}