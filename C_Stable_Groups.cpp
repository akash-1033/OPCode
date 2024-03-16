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
    ll n, k, x, c = 0, q = 0, sum = 0, l = 0;
    cin >> n >> k >> x;
    ll a[n];
    vector<ll> v;
    In a[i];
    sort(a, a + n);
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > x)
        {
            l++;
            ll e;
            ll b = a[i + 1] - a[i];
            if (b % x != 0)
            {
                e = b / x;
            }
            else
            {
                e = (b / x) - 1;
            }
            v.push_back(e);
        }
    }
    ll j = 0;
    sort(v.begin(), v.end());
    for (ll i : v)
    {
        sum += i;
        if (sum <= k)
        {
            j++;
        }
        else
        {
            break;
        }
    }
    cout << l - j + 1;
}

int main()
{
    fast
    solve();
}