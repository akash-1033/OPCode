#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    string s;
    cin >> n;
    cin >> s;
    for (ll m = 1; m < n; m++)
    {
        ll al = 0, ao = 0, bl = 0, bo = 0, c = 0;
        for (ll i = 0; i < m; i++)
        {

            if (s[i] == 'L')
            {
                al++;
            }
            if (s[i] == 'O')
            {
                ao++;
            }
        }
        for (ll i = m; i < n; i++)
        {
            if (s[i] == 'L')
            {
                bl++;
            }
            if (s[i] == 'O')
            {
                bo++;
            }
        }
        if (ao != bo)
        {
            c++;
        }
        if (al != bl)
        {
            c++;
        }
        if (c == 2)
        {
            cout << m << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}