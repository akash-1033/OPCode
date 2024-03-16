#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            if (s[0] == 'T' && s[1] == 'i' && s[2] == 'm' && s[3] == 'r' && s[4] == 'u')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}