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
        sort(a, a + n);
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                cout << "NO" << endl;
                goto l;
            }
        }
        cout << "YES" << endl;
    l:;
    }
}