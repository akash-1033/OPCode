#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, a;
    cin >> s >> a;
    ll c = 0;
    ll n = s.length();
    ll m = a.length();
    for (ll i = n - 1, j = m - 1; i >= 0, j >= 0; i--, j--)
    {
        if (s[i] == a[j])
        {
            c++;
        }
        else
        {
            break;
        }
    }
    ll res = (n - c) + (m - c);
    cout << res;
}