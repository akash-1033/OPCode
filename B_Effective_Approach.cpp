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
    ll t, a, q = 0, w = 0;
    cin >> t;
    map<ll, ll> m;
    for (ll i = 1; i < t + 1; i++)
    {
        cin >> a;
        m[a] = i;
    }
    ll n;
    cin >> n;
    while (n--)
    {
        ll b;
        cin >> b;
        q += m[b];
        w += t - m[b] + 1;
    }
    cout << q << " " << w << endl;
}

int main()
{
    fast
    solve();
}