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
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        for (ll i = 0; i < n; i++)
        {
            if (b[i] != a[n - 1])
            {
                cout << b[i] - a[n - 1] << " ";
            }
            else
            {
                cout << b[i] - a[n - 2] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    fast
    solve();
}