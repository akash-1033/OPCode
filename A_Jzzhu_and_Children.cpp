#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m, a, z;
    cin >> n >> m;
    ll k = n, mx = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        if (a > m)
        {
            if (a % m == 0)
            {
                z = a / m;
                if (z >= mx)
                {
                    k = i + 1;
                    mx = z;
                }
            }
            else
            {
                z = a / m + 1;
                if (z >= mx)
                {
                    k = i + 1;
                    mx = z;
                }
            }
        }
    }
    cout << k;
}