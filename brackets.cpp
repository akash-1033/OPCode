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
        ll a = 0, b = 0, c = 0;
        if (n % 2 == 0)
        {
            if (((s[0] == '(') || (s[0] == '?')) && ((s[n - 1] == ')') || (s[n - 1] == '?')))
            {
                for (ll i = 1; i < n - 1; i++)
                {
                    if (s[i] == '(')
                    {
                        a++;
                    }
                    else if (s[i] == ')')
                    {
                        b++;
                    }
                    else
                    {
                        c++;
                    }
                }
                if (abs(a - b) <= c)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}