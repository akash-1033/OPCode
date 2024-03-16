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
        ll a, b;
        cin >> a >> b;
        ll k = (4 * a) - 2;
        if (b == k)
        {
            cout << b / 2 + 1 << endl;
        }
        else
        {
            if (b % 2 == 0)
            {
                cout << b / 2 << endl;
            }
            else
            {
                cout << b / 2 + 1 << endl;
            }
        }
    }
}

int main()
{
    fast
    solve();
}