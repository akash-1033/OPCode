#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, x = 0, y = 0, z = 0, x1 = 0, x2 = 0, y1 = 0, y2 = 0, z1 = 0, z2 = 0, sum = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 3 == 0)
            {
                x++;
            }
            else if (a % 3 == 1)
            {
                y++;
            }
            else if (a % 3 == 2)
            {
                z++;
            }
        }
        // cout << x << y << z;
        ll k = n / 3;
        if (z > k)
        {
            z1 = z - k;
        }
        else
        {
            z2 = k - z;
        }
        if (y > k)
        {
            y1 = y - k;
        }
        else
        {
            y2 = k - y;
        }
        if (x > k)
        {
            x1 = x - k;
        }
        else
        {
            x2 = k - x;
        }
        while (z1 > 0)
        {
            if (y2 > 0)
            {
                sum += 2;
                y2--;
            }
            else if (x2 > 0)
            {
                sum += 1;
                x2--;
            }
            z1--;
        }
        while (y1 > 0)
        {
            if (z2 > 0)
            {
                sum += 1;
                z2--;
            }
            else if (x2 > 0)
            {
                sum += 2;
                x2--;
            }
            y1--;
        }
        while (x1 > 0)
        {
            if (z2 > 0)
            {
                sum += 2;
                z2--;
            }
            else if (y2 > 0)
            {
                sum += 1;
                y2--;
            }
            x1--;
        }
        cout << sum << endl;
    }
}