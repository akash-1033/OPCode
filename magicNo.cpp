#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll n = s.length(), c = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1' && s[i + 1] == '4' && i < n - 2 && s[i + 2] == '4')
        {
            // cout << i;
            c = c + 3;
            i = i + 2;
        }
        else if (s[i] == '1' && i < n - 1 && s[i + 1] == '4')
        {
            // cout << i;
            c = c + 2;
            i = i + 1;
        }
        else if (s[i] == '1')
        {
            // cout << i;
            c = c + 1;
        }
        else
        {
            continue;
        }
    }
    if (c == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}