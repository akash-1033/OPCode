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
    ll n, m, k = 0;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 'C' || ch == 'M' || ch == 'Y')
            {
                k = 1;
            }
        }
    }
    if (k == 1)
    {
        cout << "#Color";
    }
    else
    {
        cout << "#Black&White";
    }
}

int main()
{
    fast
    solve();
}