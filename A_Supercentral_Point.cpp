#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define In                     \
    for (ll i = 0; i < n; i++) \
    {                          \
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
    ll n, x = 0, y = 0, z = 0, w = 0, c = 0;
    cin >> n;
    ll a[n], b[n];
    In a[i] >> b[i];
}
for (ll i = 0; i < n; i++)
{
    for (ll j = 0; j < n; j++)
    {
        if (i != j)
        {
            if (a[i] == a[j] && b[i] > b[j])
            {
                x = 1;
            }
            else if (a[i] == a[j] && b[i] < b[j])
            {
                y = 1;
            }
            else if (b[i] == b[j] && a[i] > a[j])
            {
                z = 1;
            }
            else if (b[i] == b[j] && a[i] < a[j])
            {
                w = 1;
            }
        }
    }
    if (x > 0 && y > 0 && z > 0 && w > 0)
    {
        c++;
    }
    x = 0;
    y = 0;
    z = 0;
    w = 0;
}
cout << c;
}

int main()
{
    fast
    solve();
}