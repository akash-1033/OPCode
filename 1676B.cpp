#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll *k = min_element(a, a + n);
        for (ll i = 0; i < n; i++)
        {
            sum += a[i] - (*k);
        }
        cout << sum << endl;
    }
}