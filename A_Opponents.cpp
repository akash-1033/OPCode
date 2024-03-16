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
    ll n, d, mx = 0, c = 0;
    cin >> n >> d;
    for (ll i = 0; i < d; i++)
    {
        string s;
        cin >> s;
        ll q = count(s.begin(), s.end(), '0');
        if (q > 0)
        {
            c++;
            mx = max(mx, c);
        }
        else
        {
            mx = max(mx, c);
            c = 0;
        }
    }
    cout << mx << endl;
}

int main()
{
    fast
    solve();
}