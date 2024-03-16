#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, a, m = 0, s = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        s += a;
        if (s < m)
        {
            m = s;
        }
    }
    cout << -1 * m;
}