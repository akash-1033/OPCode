#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mx = a[0];
    ll mn = a[0];
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > mx || a[i] < mn)
        {
            c++;
        }
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    cout << c << endl;
}