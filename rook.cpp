#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (ll i = 1; i <= 8; i++)
        {
            string h = to_string(i);
            if (s[1] != h[0])
            {
                cout << s[0] + h << endl;
            }
        }
        for (ll i = 97; i <= 104; i++)
        {
            char k = (char)(i);
            if (s[0] != k)
            {
                cout << k << s[1] << endl;
            }
        }
    }
}