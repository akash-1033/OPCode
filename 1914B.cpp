#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        for (ll i = n - k; i <= n; i++)
        {
            cout << i << " ";
        }
        for (ll i = n - k - 1; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}