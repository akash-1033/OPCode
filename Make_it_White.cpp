#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n;
        string s;
        cin >> s;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B')
            {
                a = i;
                break;
            }
        }
        for (ll i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                b = i;
                break;
            }
        }
        cout << b - a + 1 << endl;
    }
}