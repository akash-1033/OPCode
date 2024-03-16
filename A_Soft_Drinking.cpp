#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, l, c, d, p, a, b;
    cin >> n >> k >> l >> c >> d >> p >> a >> b;
    ll q = k * l;
    ll w = c * d;
    ll e = min(q / a, min(w, p / b));
    cout << e / n;
}