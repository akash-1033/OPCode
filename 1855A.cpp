#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, c = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            if (a == i + 1)
            {
                c++;
            }
        }
        if (c % 2 == 0)
        {
            cout << c / 2 << endl;
        }
        else
        {
            cout << (c / 2) + 1 << endl;
        }
    }
}