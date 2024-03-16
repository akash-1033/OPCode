#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x, y = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            if (y + 1 != x)
            {
                y++;
            }
            else
            {
                y += 2;
            }
        }
        cout << y << endl;
    }
}