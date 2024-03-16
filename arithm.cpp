#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = a * b * c;
    ll y = (a + b) * c;
    ll z = a * (b + c);
    ll k = a + b + c;
    ll mxm = max(x, max(y, max(k, z)));
    cout << mxm;
}