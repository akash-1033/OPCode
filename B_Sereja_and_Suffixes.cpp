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
    ll n, m, k;
    cin >> n >> m;
    ll a[n], b[n];
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        s.insert(a[i]);
        b[i] = s.size();
    }
    while (m--)
    {
        cin >> k;
        cout << b[k - 1] << endl;
    }
}

int main()
{
    fast
    solve();
}