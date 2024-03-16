#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a[i] = abs(k);
    }
    sort(a, a + n);
    cout << a[0];
}