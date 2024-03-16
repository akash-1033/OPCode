#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, c = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> k;
            if (k % 2 != 0)
            {
                c++;
            }
        }
        if (c % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}