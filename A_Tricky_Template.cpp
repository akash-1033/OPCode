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
        string a, b, c;
        cin >> a >> b >> c;
        for (ll i = 0; i < n; i++)
        {
            if ((a[i] == b[i] && a[i] != c[i]) || (c[i] != b[i] && c[i] != a[i]))
            {
                cout << "YES" << endl;
                goto l;
            }
        }
        cout << "NO" << endl;
    l:;
    }
}