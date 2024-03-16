#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k, n, w, sum = 0;
    cin >> k >> n >> w;
    for (ll i = 1; i <= w; i++)
    {
        sum += i * k;
    }
    if (sum <= n)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << sum - n << endl;
    }
}