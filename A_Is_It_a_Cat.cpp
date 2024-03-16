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
        ll n, c = 0;
        cin >> n;
        string s;
        cin >> s;
        string r = "meow";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        set<char> m(s.begin(), s.end());
        if (m.size() != 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll j = 0;
            for (char i : s)
            {
                if (i == r[j])
                {
                    continue;
                }
                else if (i == r[j + 1])
                {
                    j++;
                }
                else
                {
                    cout << "NO" << endl;
                    goto l;
                }
            }
            if (j == 3)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        l:;
        }
    }
}

int main()
{
    fast
    solve();
}