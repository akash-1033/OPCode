#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define In                     \
    for (ll i = 0; i < n; i++) \
    {                          \
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
    ll n, k, c, p = 0, mx = 0, sum = 0;
    cin >> n >> k;
    ll a[n + 1];
    a[0] = sum;
    for (ll i = 1; i < n + 1; i++)
    {
        ll q;
        cin >> q;
        sum += q;
        a[i] = sum;
    }
    ll j = 1, i = 0;
    while (i < n && j < n + 1)
    {
        if (a[j] - a[i] <= k)
        {
            p = j - i;
            mx = max(mx, p);
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << mx;
}

int main()
{
    fast
    solve();
}