#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, r;
    cin >> n >> r;
    for (ll i = 1; i >= 0; i++)
    {
        if ((i * n) % 10 == r || (i * n) % 10 == 0)
        {
            cout << i;
            return 0;
        }
    }
}