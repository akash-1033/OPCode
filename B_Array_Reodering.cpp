#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (__gcd(a[i], 2 * a[j]) > 1 || __gcd(2 * a[i], a[j]) > 1)
                {
                    c++;
                }
            }
        }
        cout << c << endl;
    }
}