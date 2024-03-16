#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll x;
    cin >> x;
    string s = to_string(x);
    for (ll i = 0; i < s.length(); i++)
    {
        string a = "";
        a += s[i];
        ll k = stoll(a);
        if (k < 5 || (i == 0 && k == 9))
        {
            cout << k;
        }
        else
        {
            cout << 9 - k;
        }
    }
}