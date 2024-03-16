#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (k == 0)
    {
        if (a[0] > 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else if (k == n)
    {
        cout << a[n - 1] << endl;
    }
    else if (a[k - 1] != a[k])
    {
        cout << a[k - 1];
    }
    else
    {
        cout << -1;
    }
}