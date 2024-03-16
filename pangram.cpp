#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (ll i = 65; i < 91; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (s[j] == i || s[j] == (i + 32))
                {
                    c++;
                    goto label;
                }
            }
        label:
            if (c >= 26)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
        return 0;
    }
}