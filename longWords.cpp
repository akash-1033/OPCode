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
        ll n = s.length();
        if (n > 10)
        {
            string x = to_string(n - 2);
            string a = s[0] + x + s[n - 1];
            cout << a << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}