#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll k = abs(x - y) * a;
        ll l = min(x, y) * b;
        ll z = (x + y) * a;
        if (z <= k + l)
        {
            cout << z << endl;
        }
        else
        {
            cout << k + l << endl;
        }
    }
}