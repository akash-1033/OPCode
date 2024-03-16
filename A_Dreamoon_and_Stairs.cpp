#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m, k;
    cin >> n >> m;
    if (n < m)
    {
        cout << "-1";
    }
    else
    {
        if (n % 2 == 0)
        {
            k = n / 2;
        }
        else
        {
            k = n / 2 + 1;
        }
        if (k % m == 0)
        {
            cout << k;
        }
        else
        {
            ll z = k / m;
            ll p = ((z + 1) * m) - k;
            if (p <= k)
            {
                cout << k + p;
            }
            else
            {
                cout << -1;
            }
        }
    }
}