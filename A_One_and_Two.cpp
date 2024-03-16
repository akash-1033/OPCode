#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define In                     \
    for (ll i = 0; i < n; i++) \
    cin >>
#define t     \
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
    ll n, x, tw = 0;
    cin >> n;
    ll A[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 2)
            tw++;
        A[i] = tw;
    }
    x = A[n - 1];
    for (ll i = 0; i < n - 1; i++)
    {
        if (A[i] == (x - A[i]))
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    fast
        t
    {
        solve();
    }
}
