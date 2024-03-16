#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define In                     \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    test
    {
        ll k;
        cin >> k;
        ll n = k - 1;
        ll a[n];
        In cout << a[0] << " ";
        for (ll i = 0; i < n - 1; i++)
        {
            cout << min(a[i], a[i + 1]) << " ";
        }
        cout << a[n - 1];
        cout << endl;
    }
}

int main()
{
    fastio();
    solve();
}