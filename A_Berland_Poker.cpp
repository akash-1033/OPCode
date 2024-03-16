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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a = n / k;
        if (m <= a)
        {
            cout << m << endl;
        }
        else
        {
            ll e = 0;
            if ((m - a) <= (k - 1))
            {
                cout << max(e, a - 1) << endl;
            }
            else
            {
                ll q = (m - a) % (k - 1);
                ll w = (m - a) / (k - 1);
                if (q == 0)
                {
                    cout << max(e, a - w) << endl;
                }
                else
                {
                    cout << max(e, a - (w + 1)) << endl;
                }
            }
        }
    }
}

int main()
{
    fast
    solve();
}