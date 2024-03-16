#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define In                     \
    for (ll i = 0; i < n; i++) \
    cin >>
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

ll ceilSearch(ll arr[], ll low, ll high, ll x)
{

    ll i;
    if (x <= arr[low])
        return low;
    for (i = low; i < high; i++)
    {
        if (arr[i] == x)
            return i;
        if (arr[i] < x && arr[i + 1] >= x)
            return i + 1;
    }
    return -1;
}

void solve()
{
    test
    {
        ll n, s = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll mn = INT_MAX;
        if (count(a, a + n, 1) > 0)
        {
            cout << a[n - 1] << endl;
        }
        else
        {
            for (ll i = 1; i < n; i++)
            {
                if (a[i] - a[i - 1] < mn)
                {
                    mn = a[i] - a[i - 1];
                }
            }
            ll cl = 0;
            ll b = a[cl] - mn;
            while (b > 1)
            {
                cl = ceilSearch(a, 0, n - 1, mn);
                b = a[cl] - mn;
                mn = a[cl] - mn;
            }
            if (a[cl] - mn == 0)
            {
                for (ll i = 0; i < n - 1; i++)
                {
                    s += ((a[i + 1] - a[i]) / mn) - 1;
                }
                cout << s + n << endl;
            }
            else
            {
                cout << a[n - 1] << endl;
            }
        }
    }
}

int main()
{
    fast
    solve();
}