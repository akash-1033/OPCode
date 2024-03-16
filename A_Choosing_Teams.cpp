#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, c = 0;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a <= (5 - k))
        {
            c++;
        }
    }
    cout << c / 3;
}