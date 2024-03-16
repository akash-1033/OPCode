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
        ll n, i;
        cin >> n;
        string s;
        cin >> s;
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] == '*' && s[i + 1] == '*')
            {
                break;
            }
        }
        ll k = count(s.begin(), s.begin() + i + 1, '@');
        cout << k << endl;
    }
}

int main()
{
    fast
    solve();
}