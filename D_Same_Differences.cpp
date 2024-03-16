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
        ll n, sum = 0;
        cin >> n;
        ll a;
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            m[a - i]++;
        }
        for (auto i : m)
        {
            ll c = i.second;
            if (c > 1)
            {
                sum += c * (c - 1) / 2;
            }
        }
        cout << sum << endl;
    }
}

int main()
{
    fast
    solve();
}