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
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            if (a > b)
            {
                c++;
            }
        }
        cout << c << endl;
    }
}

int main()
{
    fast
    solve();
}