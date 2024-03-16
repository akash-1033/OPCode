#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k, l, m, n, d, c = 0;
    cin >> k >> l >> m >> n >> d;
    for (ll i = 1; i < d + 1; i++)
    {
        if (i % l == 0 || i % k == 0 || i % m == 0 || i % n == 0)
        {
            c++;
        }
    }
    cout << c;
}