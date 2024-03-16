#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, l = 0;
        cin >> n >> k;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a == k)
            {
                l = 5;
            }
        }
        if (l == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}