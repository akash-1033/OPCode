#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a = 0, b = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            if (k % 2 == 0)
            {
                a += k;
            }
            else
            {
                b += k;
            }
        }
        if (a > b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}