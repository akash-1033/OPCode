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
        ll n, x = 0;
        cin >> n;
        ll a[n];
        In a[i];
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                x = max(x, a[i]);
            }
        }
        cout << x << endl;
    }
}

int main()
{
    fast
    solve();
}