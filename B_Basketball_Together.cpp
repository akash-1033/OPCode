#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m, k, i, c = 0;
    cin >> n >> m;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<>());
    if (n % 2 == 0)
    {
        k = n / 2;
        for (i = 0; i < k; i++)
        {
            if (2 * a[i] > m)
            {
                c++;
            }
        }
    }
    else
    {
        k = n / 2 - 1;
        for (i = 0; i < k; i++)
        {
            if (2 * a[i] > m)
            {
                c++;
            }
        }
        if (a[i + 1] + a[i + 2] + a[i + 3] > m)
        {
            c++;
        }
    }
    cout << c;
}