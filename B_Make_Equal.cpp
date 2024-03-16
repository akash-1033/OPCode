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
        ll n, s = 0, x = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            x += a[i];
        }
        if (n == 1)
        {
            Y
        }
        else
        {
            ll k = x / n;
            for (ll i = n - 1; i >= 0; i--)
            {
                s += a[i] - k;
                if (s > 0)
                {
                    N goto l;
                }
            }
            if (s == 0)
            {
                Y
            }
            else
            {
                N
            }
        l:;
        }
    }
}

int main()
{
    fast
    solve();
}