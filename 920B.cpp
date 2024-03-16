#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x = 0, y = 0;
        cin >> n;
        string s, a;
        cin >> s >> a;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == a[i])
            {
                continue;
            }
            else if (s[i] == '1')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        cout << max(x, y) << endl;
    }
}