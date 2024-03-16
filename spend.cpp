#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s = 0;
        cin >> n;
        while (n >= 10)
        {
            ll k = n / 10;
            s += k * 10;
            n -= k * 10;
            n += k;
        }
        cout << s + n << endl;
    }
}