#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t, x, y;
    cin >> t;
    ll a[t];
    for (ll i = 0; i < t; i++)
    {
        cin >> x >> y;
        a[i] = (x * 60) + y;
    }
    ll h = a[0], c = 0, maxm = 0;
    for (ll i = 0; i < t; i++)
    {
        if (h == a[i])
        {
            c++;
            maxm = max(c, maxm);
        }
        else
        {
            h = a[i];
            c = 1;
        }
    }
    cout << maxm << endl;
}