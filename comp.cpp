#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        string s1 = to_string(a), s2 = to_string(c);
        ll o = s1.length() + b;
        ll p = s2.length() + d;
        if (o > p)
        {
            cout << '>' << endl;
        }
        else if (o < p)
        {
            cout << "<" << endl;
        }
        else
        {

            ll q = min(b, d);
            for (ll i = 0; i < b - q; i++)
            {
                s1 += '0';
            }
            for (ll i = 0; i < d - q; i++)
            {
                s2 += '0';
            }
            ll k = stoll(s1);
            ll n = stoll(s2);
            // cout << k << n << endl;
            if (k > n)
            {
                cout << ">" << endl;
            }
            else if (k < n)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }
}