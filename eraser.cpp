#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, c = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                c++;
                i = i + k - 1;
            }
        }
        cout << c << endl;
    }
}