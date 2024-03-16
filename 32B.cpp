#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll n = s.length();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            cout << "0";
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            cout << "2";
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << "1";
            i++;
        }
    }
}