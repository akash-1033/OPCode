#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, a;
    cin >> s >> a;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] != a[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
}