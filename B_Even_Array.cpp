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
        ll n, x = 0, y = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0 && a[i] % 2 != 0)
            {
                x++;
            }
            else if (i % 2 != 0 && a[i] % 2 == 0)
            {
                y++;
            }
        }
        if (x == y)
        {
            cout << x << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}

int main()
{
    fast
    solve();
}