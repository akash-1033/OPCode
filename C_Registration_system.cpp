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
    ll t;
    cin >> t;
    map<string, ll> m;
    while (t--)
    {
        string s;
        cin >> s;
        m[s]++;
        if (m[s] == 1)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << m[s] - 1 << endl;
        }
    }
}

int main()
{
    fast
    solve();
}