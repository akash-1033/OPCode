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
    ll a, b, c;
    cin >> a >> b >> c;
    for (ll i = a; i > 0; i--)
    {
        if (b >= 2 * i && c >= 4 * i)
        {
            cout << 7 * i;
            return;
        }
    }
    cout << 0;
}

int main()
{
    fast
    solve();
}