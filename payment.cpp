#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        if (s % n == 0)
        {
            ll k = s / n;
            if (k <= a || ((k - a) * n) <= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            ll k = s / n;
            ll p = s % n;
            if (k <= a && p <= b)
            {
                cout << "YES" << endl;
            }
            else if (k >= a && (((k - a) * n) + p) <= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}