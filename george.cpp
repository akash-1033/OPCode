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
        ll p, q;
        cin >> p >> q;
        if (q - p >= 2)
        {
            c++;
        }
    }
    cout << c;
}
