#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    char d;
    string s, z = "qwertyuiopasdfghjkl;zxcvbnm,./", q = "";
    cin >> d >> s;
    if (d == 'R')
    {
        for (ll i = 0; i < s.length(); i++)
        {
            ll k = z.find(s[i]);
            q += z[k - 1];
        }
    }
    else
    {
        for (ll i = 0; i < s.length(); i++)
        {
            ll k = z.find(s[i]);
            q += z[k + 1];
        }
    }
    cout << q;
}