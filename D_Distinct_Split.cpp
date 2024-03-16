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
        ll n, l = 0, c = 0;
        cin >> n;
        string s;
        cin >> s;
        set<char> p(s.begin(), s.end());
        ll o = n - p.size();
        for (ll i = 1; i < s.length(); i++)
        {
            ll k = count(s.begin(), s.begin() + i, s[i]);
            if (k > 0 && c > o)
            {
                l = i;
                c++;
                break;
            }
        }
        set<char> r(s.begin(), s.begin() + l);
        set<char> q(s.begin() + l, s.end());
        cout << r.size() + q.size() << endl;
    }
}

int main()
{
    fast
    solve();
}