#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define In                     \
    for (ll i = 0; i < n; i++) \
    cin >>
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    test
    {
        ll a = 0, b = 0, c = 0;
        string s;
        cin >> s;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                a++;
            }
            else if (s[i] == ')')
            {
                if (a > 0)
                {
                    c++;
                    a--;
                }
            }
            else if (s[i] == '[')
            {
                b++;
            }
            else if (s[i] == ']')
            {
                if (b > 0)
                {
                    c++;
                    b--;
                }
            }
        }
        cout << c << endl;
    }
}

int main()
{
    fast
    solve();
}