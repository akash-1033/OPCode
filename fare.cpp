#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m, a, b, k, f;
    cin >> n >> m >> a >> b;
    if (n % m == 0)
    {
        k = (n / m) * b;
    }
    else
    {
        k = ((n / m) * b) + ((n % m) * a);
    }
    f = ((n / m) + 1) * b;
    ll z = n * a;
    cout << min(k, min(z, f));
}