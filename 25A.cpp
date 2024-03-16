#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, q = 0, w = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            q++;
        }
        else
        {
            w++;
        }
    }
    if (q > w)
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
    if (q < w)
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
}