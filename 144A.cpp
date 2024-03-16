#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, q, w;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll *min = min_element(a, a + n);
    ll *max = max_element(a, a + n);
    for (ll i = n; i >= 0; i--)
    {
        if (*min == a[i])
        {
            q = i;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (*max == a[i])
        {
            w = i;
            break;
        }
    }
    if (w >= q)
    {
        q++;
    }
    cout << w + (n - q - 1);
}