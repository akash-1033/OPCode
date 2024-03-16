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
        ll n, x;
        cin >> n >> x;
        if (n > 2)
        {
            n = n - 2;
            if (n % x == 0)
            {
                cout << n / x + 1 << endl;
            }
            else
            {
                cout << n / x + 2 << endl;
            }
        }
        else
        {
            cout << 1 << endl;
        }
    }
}

int main()
{
    fast
    solve();
}