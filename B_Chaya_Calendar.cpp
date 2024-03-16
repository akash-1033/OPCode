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

int sumOfDigitsFrom1ToN(int n)
{
    if (n < 10)
        return n * (n + 1) / 2;
    int d = log10(n);
    int *a = new int[d + 1];
    a[0] = 0, a[1] = 45;
    for (int i = 2; i <= d; i++)
        a[i] = a[i - 1] * 10 + 45 * ceil(pow(10, i - 1));

    int p = ceil(pow(10, d));
    int msd = n / p;
    return msd * a[d] + (msd * (msd - 1) / 2) * p +
           msd * (1 + n % p) + sumOfDigitsFrom1ToN(n % p);
}

void solve()
{
    test
    {
        ll n;
        cin >> n;
        cout << sumOfDigitsFrom1ToN(n) << endl;
    }
}

int main()
{
    fast
    solve();
}