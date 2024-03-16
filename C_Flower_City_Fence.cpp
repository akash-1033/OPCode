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
        ll a[n], x = 0, y = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n < a[0])
        {
            cout << "NO" << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                x = 0;
                y = 0;
                x += a[0] - a[i];
                for (ll j = n - 1; j >= 0; j--)
                {
                    if (a[j] < i + 1)
                    {
                        y += 1;
                    }
                    else
                    {
                        goto q;
                    }
                }
            q:
                if (x != y)
                {
                    cout << "NO" << endl;
                    goto l;
                }
            }
            cout << "YES" << endl;
        l:;
        }
    }
}