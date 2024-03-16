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
        ll n;
        cin >> n;
        char ch;
        cin >> ch;
        ll q = 2 * n;
        string s;
        vector<ll> v1, v2, v3, v4;
        while (q--)
        {
            cin >> s;
            if (s[1] == 'S')
            {
                v1.push_back(s[0]);
            }
        }
    }
}

int main()
{
    fast
    solve();
}