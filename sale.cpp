#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, c = 0, s = 0;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < 0 && c < k)
        {
            s += a[i];
            c++;
        }
    }
    cout << abs(s) << endl;
}