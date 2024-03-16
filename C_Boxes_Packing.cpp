#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define In                     \
    for (ll i = 0; i < n; i++) \
    cin >>
#define test2 \
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
    ll t, w = 0;
    cin >> t;
    ll b[t];
    map<ll, ll> m;
    for (ll i = 0; i < t; i++)
    {
        cin >> b[i];
        m[b[i]]++;
    }
    set<ll> r(b, b + t);
    ll e = r.size();
    ll a[e], j = 0;
    for (auto k : m)
    {
        a[j] = k.second;
        j++;
    }
    for (ll i = 0; i < e; i++)
    {
        if (w <= a[i])
        {
            w = a[i];
        }
    }
    cout << w;
}

int main()
{
    fast
    solve();
}