#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, m, z;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        m = n / 2;
    }
    else
    {
        m = (n + 1) / 2;
    }
    if (k <= m)
    {
        z = 1 + ((k - 1) * 2);
    }
    else
    {
        k = k - m;
        z = 2 + ((k - 1) * 2);
    }
    cout << z << endl;
}