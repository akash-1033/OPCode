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
long long lcm(int a, int b) { return (a / __gcd(a, b)) * b; }

void solve()
{
    test
    {
        ll n;
        cin >> n;
        ll x = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                x = n / i;
                break;
            }
        }
        cout << x << " " << n - x << endl;
    }
}
int main()
{
    fast
    solve();
}