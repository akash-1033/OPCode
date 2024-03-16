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
    ll n, sum = 0;
    cin >> n;
    ll a[n];
    In a[i];
    ll m = *max_element(a, a + n);
    for (ll i : a)
    {
        sum += m - i;
    }
    cout << sum;
}

int main()
{
    fast
    solve();
}