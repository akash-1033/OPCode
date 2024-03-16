#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll k = n - a;
    if (k <= b + 1)
    {
        cout << k;
    }
    else
    {
        cout << b + 1;
    }
}