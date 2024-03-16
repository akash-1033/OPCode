#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t, c = 0;
    cin >> t;
    ll a[t], b[t];
    for (ll i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (ll i = 0; i < t; i++)
    {
        c += count(b, b + t, a[i]);
    }
    cout << c;
}