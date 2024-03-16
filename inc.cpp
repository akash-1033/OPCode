#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, l = 0;
        cin >> x >> y;
        if (x == 1)
        {
            if (y == 1)
            {
                l = 1;
            }
        }
        else if (x == 2)
        {
            if (y == 1 || y == 3 || y == 2)
            {
                l = 1;
            }
        }
        else if (x == 3)
        {
            if (y == 2 || y == 1 || y == 3)
            {
                l = 1;
            }
        }
        else if (x > 3)
        {
            l = 1;
        }
        else
        {
            l = 0;
        }
        if (l == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}