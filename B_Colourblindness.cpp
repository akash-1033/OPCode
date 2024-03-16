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
        string s, r;
        cin >> s >> r;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'R' && s[i] != r[i])
            {
                cout << "NO" << endl;
                goto l;
            }
            else if (r[i] == 'R' && s[i] != r[i])
            {
                cout << "NO" << endl;
                goto l;
            }
        }
        cout << "YES" << endl;
    l:;
    }
}

int main()
{
    fast
    solve();
}