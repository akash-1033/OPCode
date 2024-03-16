#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, z = "";
    cin >> s;
    ll k = 0;
    ll n = s.length();
    for (ll i = 1; i < n; i++)
    {
        if (isupper(s[i]))
        {
            k++;
        }
    }
    if (k == n - 1)
    {
        if (isupper(s[0]))
        {
            z += tolower(s[0]);
        }
        else
        {
            z += toupper(s[0]);
        }
        for (ll i = 1; i < n; i++)
        {
            z += tolower(s[i]);
        }
        cout << z << endl;
    }
    else
    {
        cout << s << endl;
    }
}