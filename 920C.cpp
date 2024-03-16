#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, f, a, b, y, x = 0;
        cin >> n >> f >> a >> b;
        for (ll i = 0; i < n; i++)
        {
            cin >> y;
            if (((y - x) * a) < b)
            {
                f -= (y - x) * a;
                x = y;
            }
            else
            {
                f -= b;
                x = y;
            }
        }
        if (f <= 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
