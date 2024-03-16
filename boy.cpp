#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll c = 0;
    string s;
    cin >> s;
    ll n = s.length();
    sort(s.begin(), s.end());
    char d = s[0];
    for (ll i = 0; i < n; i++)
    {
        if (d == s[i])
        {
            c++;
        }
        else
        {
            d = s[i];
        }
    }
    ll k = n - (c - 1);
    if (k % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}