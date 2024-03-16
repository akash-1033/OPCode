#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, str = "";
        cin >> s;
        ll k, sum = 0, z;
        cin >> k;
        for (ll i : s)
        {
            sum += (i - 96);
        }
        while (sum > k)
        {
            ll mi, max = 0;
            for (ll i = 0; i < s.length(); i++)
            {
                ll q = s[i];
                if ((q - 96) > max)
                {
                    max = q - 96;
                    z = i;
                }
            }
            cout << z << endl;
            // s.erase(z, 1);
            // for (ll i : s)
            // {
            //     sum += (i - 96);
            // }
            // cout << sum << endl;
            // s = str;
        }
        // cout << s << endl;
    }
}