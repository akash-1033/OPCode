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
        string s;
        cin >> s;
        ll n = s.length();
        if (n == 1)
        {
            cout << s << endl;
        }
        else
        {
            set<char> q;
            map<ll, char> m;
            for (char i : s)
            {
                m[i]++;
            }
            for (auto i : m)
            {
                if (i.second % 2 != 0)
                {
                    q.insert(i.first);
                }
                else
                {
                    for (ll j = 0; j < n - 1; j++)
                    {
                        if (s[j] == i.first)
                        {
                            if (s[j + 1] != i.first)
                            {
                                q.insert(i.first);
                            }
                            else
                            {
                                j += 1;
                            }
                        }
                    }
                }
            }
            for (char i : q)
            {
                cout << i;
            }
            cout << endl;
        }
    }
}

int main()
{
    fast
    solve();
}