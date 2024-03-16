#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, a, b, c = 0, d = 0, k = 0, l = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a % 2 != 0)
        {
            k++;
        }
        if (b % 2 != 0)
        {
            l++;
        }
        if (a % 2 == 0 && b % 2 != 0)
        {
            d++;
        }
        else if (a % 2 != 0 && b % 2 == 0)
        {
            c++;
        }
    }
    // cout << k << l;
    if (k % 2 == 0 && l % 2 == 0)
    {
        cout << 0 << endl;
    }
    else if (abs(d - c) % 2 == 0 && (d > 0 || c > 0))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}