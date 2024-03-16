#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0, m = 0;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        char ch = 'A';
        for (ll i = 0; i < s.length(); i++)
        {
            ll w = (ll)(ch - 64);
            if (ch == s[i])
            {
                // cout << c;
                c++;
                if (c >= w && i == s.length() - 1)
                {
                    m++;
                }
            }
            else
            {
                if (c >= w)
                {
                    m++;
                }
                c = 1;
                ch = s[i];
            }
        }
        cout << m << endl;
    }
}