#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2020 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll r = n % 2020;
            n = n - (r * 2021);
            ll k = n % 2020;
            if (k == 0 && n >= 0)
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