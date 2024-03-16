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
        string s;
        cin >> s;
        set<string> m;
        for (ll i = 0; i < n - 1; i++)
        {
            string str = "";
            str += s[i];
            str += s[i + 1];
            m.insert(str);
        }
        cout << m.size() << endl;
    }
}

int main()
{
    fast
    solve();
}