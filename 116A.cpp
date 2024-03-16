#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k = 0, s = 0;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        k -= a;
        k += b;
        s = max(s, k);
    }
    cout << s;
}