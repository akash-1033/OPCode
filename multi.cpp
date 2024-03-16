#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, c = 0;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
    {
        if (k % i == 0 && k / i <= n)
        {
            c++;
        }
    }
    cout << c;
}