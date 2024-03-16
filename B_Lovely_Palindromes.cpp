#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, r = "", t = "";
    cin >> s;
    ll m = s.length();
    for (ll i = 0; i < m; i++)
    {
        r += s[i];
        t += s[m - i - 1];
    }
    cout << r << t;
}