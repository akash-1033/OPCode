#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            ll k = a / b;
            ll res = ((k + 1) * b) - a;
            cout << res << endl;
        }
    }
}