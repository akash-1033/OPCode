#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, s;
    cin >> n >> k;
    ll z = 240 - k;
    for (ll i = 1; i < n + 1; i++)
    {
        s = ((i * (i + 1)) / 2) * 5;
        if (s == z)
        {
            cout << i;
            return 0;
        }
        else if (s > z)
        {
            cout << i - 1;
            return 0;
        }
    }
    cout << n;
}