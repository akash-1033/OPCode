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
        ll n, c = 0;
        cin >> n;
        ll a[n];
        In a[i];
        if (n == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            ll x = 0, y = n - 1, z = 0;
            for (ll i = 0; i < n - 1; i++)
            {
                if (a[i] == a[i + 1])
                {
                    x++;
                }
                else
                {
                    break;
                }
            }
            for (ll i = n - 1; i > 0; i--)
            {
                if (a[i] == a[i - 1])
                {
                    y--;
                }
                else
                {
                    break;
                }
            }
            ll q = 0;
            ll j = y - x - 1;
            if (a[0] == a[n - 1])
            {
                cout << max(q, j) << endl;
            }
            else
            {
                cout << min(n - x - 1, y) << endl;
            }
        }
    }
}

int main()
{
    fast
    solve();
}