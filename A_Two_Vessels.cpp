#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll k = (a + b) / 2;
        k = max(a, b) - k;
        if (k % c == 0)
        {
            cout << k / c << endl;
        }
        else
        {
            cout << k / c + 1 << endl;
        }
    }
}