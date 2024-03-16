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

bool prime(ll n)
{
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 4; i < n; i++)
    {
        if (!prime(i) && !prime(n - i) && i != n - i)
        {
            cout << i << " " << n - i;
            return;
        }
    }
}

int main()
{
    fast
    solve();
}