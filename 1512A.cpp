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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll q = count(a, a + n, a[0]);
        if (q > 1)
        {
            for (ll i = 0; i < n; i++)
            {
                if (a[0] != a[i])
                {
                    cout << i + 1 << endl;
                }
            }
        }
        else
        {
            cout << 1 << endl;
        }
    }
}