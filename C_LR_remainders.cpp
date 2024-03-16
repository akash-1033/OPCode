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
        ll n, k, x;
        cin >> n >> k;
        ll a[n + 1], pro = 1;
        a[0] = 1;
        for (ll i = 1; i < n + 1; i++)
        {
            cin >> x;
            pro *= x;
            a[i] = pro;
        }
        ll q = 0, w = n;
        string s;
        cin >> s;
        ll i = 0;
        while (q < w)
        {
            ll b = a[w] / a[q];
            cout << b % k << " ";
            if (s[i] == 'L')
            {
                q++;
            }
            else
            {
                w--;
            }
            i++;
        }
        cout << endl;
    }
}

int main()
{
    fast
    solve();
}