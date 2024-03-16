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
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            sort(a, a + n);
            for (ll i = 0; i < n - 1; i++)
            {
                if (a[i + 1] - a[i] <= 1)
                {
                    c++;
                }
            }
            if (c == n - 1)
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