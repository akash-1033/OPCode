#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        ll a[n - 1];
        for (ll i = 0; i < n - 1; i++)
        {
            ll k;
            cin >> k;
            sum += k;
        }
        cout << 0 - sum << endl;
    }
}