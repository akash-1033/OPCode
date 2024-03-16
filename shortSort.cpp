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
        ll d = 0;
        if (s[0] != 'a')
        {
            d++;
        }
        if (s[1] != 'b')
        {
            d++;
        }
        if (s[2] != 'c')
        {
            d++;
        }
        if (d <= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}