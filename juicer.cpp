#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, b, d, sum = 0, c = 0;
    cin >> n >> b >> d;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= b)
        {
            sum += a[i];
            if (sum > d)
            {
                c++;
                sum = 0;
            }
        }
    }
    cout << c;
}