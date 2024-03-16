#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y, m = 0, k = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> x >> y;
            if (x <= 10)
            {
                if (y > m)
                {
                    m = y;
                    k = i + 1;
                }
            }
        }
        cout << k << endl;
    }
}