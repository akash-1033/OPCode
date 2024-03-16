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
        if (n < 26)
        {
            ll i = 0;
            while (i < 2)
            {
                cout << "a";
                n--;
                i++;
            }
            cout << (char)(n + 96) << endl;
        }
        else
        {
            string s = "";
            ll k = 26, i = 0, j = 1;
            while (i < 3)
            {
                if (n > (k + j))
                {
                    s = (char)(k + 96) + s;
                    n -= k;
                    i++;
                    j--;
                }
                else
                {
                    k--;
                }
            }
            cout << s << endl;
        }
    }
}

int main()
{
    fast
    solve();
}