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
        ll n, k, q, mx = 0, c = 0, w;
        cin >> n >> k;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> q;
            a[i] = q + i;
        }
        In b[i];
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= k)
            {
                if (b[i] > mx)
                {
                    mx = b[i];
                    w = i;
                }
                c = 1;
            }
        }
        if (c == 1)
        {
            cout << w + 1 << endl;
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