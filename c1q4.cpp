#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string r = "";
        r += s[0];
        r += s[1];
        for (ll i = 2; i < n; i++)
        {
            if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') && (s[i + 1] == 'a' || s[i + 1] == 'e'))
            {
                r += '.';
                r += s[i];
                r += s[i + 1];
                i = i + 1;
            }
            else
            {
                r += s[i];
            }
        }
        cout << r << endl;
    }
}