#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 0;
    string s;
    cin >> s;
    char d = s[0];
    n = s.length();
    for (ll i = 0; i < n; i++)
    {
        if (d == s[i])
        {
            c++;
            if (c >= 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            c = 1;
            d = s[i];
        }
    }
    cout << "NO" << endl;
}