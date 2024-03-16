#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m = 0, f = 0;
        cin >> n;
        if (n % 4 == 0)
        {
            m = n / 4;
        }
        if (n % 2 == 0)
        {
            f = n / 2;
        }
        else
        {
            cout << "NO" << endl;
        }

        if (m > 0)
        {
            ll k = sqrt(m);
            if ((k * k) == m)
            {
                cout << "YES" << endl;
                goto l;
            }
        }
        if (f > 0)
        {
            ll q = sqrt(f);
            if ((q * q) == f)
            {
                cout << "YES" << endl;
                goto l;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    l:;
    }
}