#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, a = 0, b = 0;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    ll k = min(a, b);
    cout << n - (2 * k) << endl;
}