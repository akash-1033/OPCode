#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll m = max(a, max(b, c));
        ll k = (m - a) + (m - b) + (m - c);
        if (k <= n)
        {
            n = n - k;
            if (n % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}