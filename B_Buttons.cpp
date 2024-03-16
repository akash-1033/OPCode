#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        ll k = n - 1, sum = n + 1;
        for (ll i = 2; i < n; i++)
        {
            sum += ((k - 1) * i) + 1;
            k--;
        }
        cout << sum;
    }
}