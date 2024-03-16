#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, s1;
    cin >> s >> s1;
    ll n = s.length();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != s1[n - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}