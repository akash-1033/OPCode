#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 1, mx = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            c++;
            mx = max(c, mx);
        }
        else
        {
            mx = max(c, mx);
            c = 1;
        }
    }
    mx = max(c, mx);
    cout << mx;
}
