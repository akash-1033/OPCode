#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll t;
    cin >> t;
    ll n = s.length();
    ll x[n + 1];
    x[0] = 0;
    ll sum = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            sum += 1;
            x[i + 1] = sum;
        }
        else
        {
            sum += 0;
            x[i + 1] = sum;
        }
    }
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << x[b - 1] - x[a - 1] << endl;
    }
}