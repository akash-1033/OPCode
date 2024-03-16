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

void solve()
{
    test
    {
        ll n, mn = INT_MAX, x, y, c = 0, q = 0, o, p;
        cin >> n;
        ll a[n], b[n - 2];
        In a[i];
        vector<ll> v;
        sort(a, a + n);
        for (ll i = 0; i < n - 1; i++)
        {
            ll k = a[i + 1] - a[i];
            if (k < mn)
            {
                mn = k;
                x = a[i + 1];
                y = a[i];
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != x && a[i] != y)
            {
                b[q] = a[i];
                q++;
            }
            else if (c < 2)
            {
                c++;
            }
            else
            {
                b[q] = a[i];
                q++;
            }
        }
        ll j = sizeof(b) / sizeof(b[0]);
        cout << y << " ";
        for (ll i = 0; i < j; i++)
        {
            if (b[i] >= y)
            {
                cout << b[i] << " ";
            }
            else
            {
                v.push_back(b[i]);
            }
        }
        for (ll i : v)
        {
            cout << i << " ";
        }
        cout << x << endl;
    }
}

int main()
{
    fast
    solve();
}