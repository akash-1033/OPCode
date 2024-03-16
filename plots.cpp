#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll m = min(a, b);
        ll n = max(a, b);
        if (2 * m <= n)
        {
            cout << n * n << endl;
        }
        else
        {
            cout << (4 * m * m) << endl;
        }
    }
}