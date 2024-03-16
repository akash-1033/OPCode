#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (ll i = 0; i < n - 2; i++)
    {
        if (a[i] + a[i + 1] <= a[i + 2])
        {
            k++;
        }
    }
    if (k < n - 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}