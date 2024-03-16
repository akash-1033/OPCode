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
    ll n;
    cin >> n;
    ll a[n];
    In a[i];
    ll c = count(a, a + n, 1);
    cout << c << endl;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == 1)
        {
            cout << a[i - 1] << " ";
        }
    }
    cout << a[n - 1] << endl;
}

int main()
{
    fast
    solve();
}