#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll n = s.length(), c = 0;
    for (ll i = 0; i < (n / 2); i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            c++;
        }
    }
    if (c <= 1 && n % 2 != 0)
    {
        cout << "YES";
    }
    else if (c == 1 && n % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}