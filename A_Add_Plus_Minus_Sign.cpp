#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            k = 0;
        }
        else
        {
            k = 1;
        }
        for (ll i = 1; i < n; i++)
        {
            if (k == 1 && s[i] == '1')
            {
                cout << "-";
                k = 0;
            }
            else if (k == 1 && s[i] == '0')
            {
                cout << "+";
            }
            else if (k == 0 && s[i] == '1')
            {
                cout << "+";
                k = 1;
            }
            else if (k == 0 && s[i] == '0')
            {
                cout << "+";
            }
        }
        cout << endl;
    }
}