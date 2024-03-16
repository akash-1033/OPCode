#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll x = (a >= b && a >= c) ? ((b >= c) ? b : c) : ((b >= c) ? ((a >= c) ? a : c) : ((a >= b) ? a : b));
        cout << x << endl;
    }
}