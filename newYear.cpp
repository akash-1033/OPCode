#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, a;
    cin >> n >> a;
    ll c = n;
    while (n / a > 0)
    {
        c += n / a;
        n = n / a + n % a;
    }
    cout << c << endl;
}