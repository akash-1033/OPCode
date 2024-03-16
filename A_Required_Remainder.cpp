#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        ll k = n / x;
        if (((k * x) + y) <= n)
        {
            cout << (k * x) + y << endl;
        }
        else
        {
            k--;
            cout << (k * x) + y << endl;
        }
    }
}