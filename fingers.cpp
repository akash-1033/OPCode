#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, sum = 0, c = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    n = n + 1;
    for (ll i = 1; i <= 5; i++)
    {
        if ((sum + i) % (n) != 1)
        {
            c++;
        }
    }
    cout << c << endl;
}