#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 1;
    cin >> n;
    string s[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i][1] == s[i + 1][0])
        {
            c++;
        }
    }
    cout << c;
}