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
        ll n, a = 0, b = 0, mn = INT_MAX, x;
        cin >> n;
        ll A[n][2], B[n + 1][2];
        B[0][0] = 0;
        B[0][1] = 0;
        for (ll i = 0; i < n; i++)
            cin >> A[i][0];
        for (ll i = 0; i < n; i++)
            cin >> A[i][1];
        for (ll i = 0; i < n; i++)
        {
            a += A[i][0];
            b += A[i][1];
            B[i + 1][0] = a;
            B[i + 1][1] = b;
        }
        for (ll i = 1; i <= n; i++)
        {
            x = max((B[n][0] - B[i][0]), (B[i - 1][1]));
            mn = min(mn, x);
        }
        cout << mn << endl;
    }
}

int main()
{
    fast
    solve();
}