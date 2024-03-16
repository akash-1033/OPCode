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
        ll n, j = 0, x = 0, k, m = 0;
        cin >> n;
        ll b = n;
        vector<ll> v, q;
        while (n--)
        {
            cin >> k;
            x += k;
            q.push_back(x);
            for (ll i = j; i < j + k; i++)
            {
                ll p;
                cin >> p;
                v.push_back(p);
            }
            j += k;
        }
        if (b == 1)
        {
            cout << v[0] << endl;
        }
        else
        {
            j -= k;
            ll i = 0, r = 0;
            while (i < j && r < b - 1)
            {
                if (count(v.begin() + i + 1, v.end(), v[i]) == 0)
                {
                    cout << v[i] << " ";
                    i = q[r] - 1;
                    r++;
                    m++;
                }
                i++;
            }
            if (m == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << v[j] << endl;
            }
        }
    }
}

int main()
{
    fast
    solve();
}