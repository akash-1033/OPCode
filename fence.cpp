#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, h, c = 0;
    cin >> n >> h;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
        {
            c += 2;
        }
        else
        {
            c += 1;
        }
    }
    cout << c;
}