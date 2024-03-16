#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, x = 0, y = 0, c = 1;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll q = 0, w = n - 1;
    for (ll i = 0; i < n; i++)
    {
        if (c == 1)
        {
            if (a[q] > a[w])
            {
                x += a[q];
                q++;
            }
            else
            {
                x += a[w];
                w--;
            }
            c = 2;
        }
        else if (c == 2)
        {
            if (a[q] > a[w])
            {
                y += a[q];
                q++;
            }
            else
            {
                y += a[w];
                w--;
            }
            c = 1;
        }
    }
    cout << x << " " << y;
}