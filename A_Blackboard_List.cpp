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
        ll n;
        cin >> n;
        ll a[n];
        In a[i];
        sort(a, a + n);
        if (a[0] < 0)
        {
            cout << a[0] << endl;
        }
        else
        {
            cout << a[n - 1] << endl;
        }
    }
}

int main()
{
    fast
    solve();
}