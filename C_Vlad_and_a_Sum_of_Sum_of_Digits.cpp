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

ll summ(ll n)
{
    if (n < 10)
    {
        return n * (n + 1) / 2;
    }
    ll d = log10(n);
    ll *b = new ll[d + 1];
    b[0] = 0, b[1] = 45;
    for (ll i = 2; i <= d; i++)
    {
        b[i] = b[i - 1] * 10 + 45 * ceil(pow(10, i - 1));
    }
    ll q = ceil(pow(10, d));
    ll res = n / q;
    return res * b[d] + (res * (res - 1) / 2) * q + res * (1 + n % q) + summ(n % q);
}

void solve()
{
    test
    {
        ll n;
        cin >> n;
        cout << summ(n) << endl;
    }
}

int main()
{
    fast
    solve();
}