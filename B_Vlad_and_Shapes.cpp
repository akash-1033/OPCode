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
        ll c[n];
        string s;
        for (ll i = 0; i < n; i++)
        {
            cin >> s;
            c[i] = count(s.begin(), s.end(), '1');
        }
        for (ll i = 0; i < n; i++)
        {
            if (c[i] > 0)
            {
                if (c[i] != c[i + 1])
                {
                    cout << "TRIANGLE" << endl;
                    goto l;
                }
                else
                {
                    cout << "SQUARE" << endl;
                    goto l;
                }
            }
        }
    l:;
    }
}

int main()
{
    fast
    solve();
}