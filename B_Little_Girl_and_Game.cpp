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
    string s;
    cin >> s;
    map<char, ll> m;
    for (char i : s)
    {
        m[i]++;
    }
    ll c = 0;
    for (auto i : m)
    {
        if ((i.second) % 2 != 0)
        {
            c++;
        }
    }
    if (c % 2 == 0 && c != 0)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "First" << endl;
    }
}

int main()
{
    fast
    solve();
}