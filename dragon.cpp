#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sorting(ll x[], ll y[], ll n)
{
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = 0; j < n - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
            }
        }
    }
}

int main()
{
    ll s, n;
    cin >> s >> n;
    ll x[n], y[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    sorting(x, y, n);
    for (ll i = 0; i < n; i++)
    {
        if (s <= x[i])
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            s += y[i];
        }
    }
    cout << "YES" << endl;
}