#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, k, res;
        cin >> x >> y >> k;
        ll z = k + (y * k) - 1;
        if (z % (x - 1) == 0)
        {
            res = ((z / (x - 1)) + k);
        }
        else
        {
            res = ((z / (x - 1)) + k + 1);
        }
        cout << res << endl;
    }
}