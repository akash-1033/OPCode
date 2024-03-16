#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll c = 2;
    ll n = 536870911;
    ll z = 268435455;
    ll m = n - z;
    while (m > 0)
    {
        double f = log2(m);
        ll w = pow(2, floor(f));
        m -= w;
        c++;
    }
    cout << c;
    return 0;
}