#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a[4][2];
        for (ll i = 0; i < 4; i++)
        {
            cin >> a[i][0] >> a[i][1];
        }
        if (a[0][0] != a[1][0])
        {
            ll k = abs(a[1][0] - a[0][0]);
            cout << k * k << endl;
        }
        else
        {
            ll k = abs(a[2][0] - a[0][0]);
            cout << k * k << endl;
        }
    }
}