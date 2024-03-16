#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        ll a[n], p = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                p = 1;
            }
            if (a[i] < 0)
            {
                c++;
            }
        }
        if (c % 2 != 0 || p == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
            cout << "1"
                 << " "
                 << "0" << endl;
        }
    }
}