#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 0;
    cin >> n;
    for (ll i = 5; i > 0; i--)
    {
        c += n / i;
        n = n % i;
    }
    cout << c << endl;
}