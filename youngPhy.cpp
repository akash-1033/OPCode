#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, x = 0, y = 0, z = 0, a, b, c;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if (x == 0 && y == 0 && z == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}