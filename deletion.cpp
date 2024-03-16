#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c = 1, z = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        ll k = n * a + n * b;
        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                c++;
            }
            else
            {
                if (c > 1)
                {
                    z += c * a + b;
                    c = 1;
                }
                else
                {
                    c = 2;
                }
            }
        }
        cout << max(k, z) << endl;
    }
}