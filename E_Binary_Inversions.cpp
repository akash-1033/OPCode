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
        ll n, c = 0, s = 0, k = 0, q = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                c++;
            }
            else
            {
                s += c;
            }
        }
        c = 0;
        ll e = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0 && e == 0)
            {
                e++;
                c++;
            }
            else if (a[i] == 1)
            {
                c++;
            }
            else
            {
                k += c;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                a[i] = 0;
                break;
            }
        }
        c = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                c++;
            }
            else
            {
                q += c;
            }
        }
        cout << max(q, max(s, k)) << endl;
    }
}

int main()
{
    fastio();
    solve();
}