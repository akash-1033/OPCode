#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    if (n < 0)
    {
        ll a = n / 10;
        ll b = (n / 100) * 10 + (n % 10);
        cout << max(a, b) << endl;
    }
    else
    {
        cout << n;
    }
}