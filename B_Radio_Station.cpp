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
    ll n, m;
    cin >> n >> m;
    string s, t;
    map<string, string> v;
    while (n--)
    {
        cin >> s >> t;
        t += ';';
        v[t] = s;
    }
    while (m--)
    {
        cin >> s >> t;
        cout << s << " " << t << " "
             << "#" << v[t] << endl;
    }
}

int main()
{
    fast
    solve();
}