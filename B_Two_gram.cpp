#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 0, mx = 0;
    cin >> n;
    string s;
    cin >> s;
    string str = "";
    str += s[0];
    str += s[1];
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (s[i] == s[j] && s[i + 1] == s[j + 1])
            {
                c++;
            }
        }
        if (c > mx)
        {
            str = "";
            str += s[i];
            str += s[i + 1];
            mx = c;
        }
        c = 0;
    }
    cout << str;
}