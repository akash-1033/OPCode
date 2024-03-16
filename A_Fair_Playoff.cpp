#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll m1 = max(a, b);
        ll n1 = min(a, b);
        ll m2 = max(c, d);
        ll n2 = min(c, d);
        if (m1 > n2 && m2 > n1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}