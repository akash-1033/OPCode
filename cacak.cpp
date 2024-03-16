#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        ll a = n * (n + 1) / 2;
        ll v = k * (k + 1) / 2;
        ll c = n - k;
        ll b = c * (c + 1) / 2;
        if (v < x || k >= x || a - b < x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}