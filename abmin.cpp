#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    ll min = a[n - 1] - a[0];
    for (ll i = 1; i < m - n + 1; i++)
    {
        if (a[i + n - 1] - a[i] < min && a[i + n - 1] - a[i] >= 0)
        {
            min = a[i + n - 1] - a[i];
        }
    }
    cout << min;
}