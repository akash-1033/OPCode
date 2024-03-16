#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x = 0, y = 0, k = 0;
        cin >> n;
        string a;
        cin >> a;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == '0')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if (x > y)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (ll i = 0; i < n - 1; i++)
            {
                if (a[i] != a[i + 1])
                {
                    k = 1;
                    break;
                }
            }
            if (k == 1)
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