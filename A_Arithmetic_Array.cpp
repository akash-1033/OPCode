#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            s += a;
        }
        if (s > n)
        {
            cout << s - n << endl;
        }
        else if (s == n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}