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
    string s;
    cin >> s;
    string r = "heidi";
    ll c = 0, j = 0;
    for (char i : s)
    {
        if (i == r[j])
        {
            j++;
            if (j == 5)
            {
                cout << "YES" << endl;
                goto l;
            }
        }
    }
    cout << "NO" << endl;
l:;
}

int main()
{
    fast
    solve();
}