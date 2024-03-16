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
#define Y cout << "Yes" << endl;
#define N cout << "No" << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    test
    {
        ll a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
        {
            Y
        }
        else if (a % 2 == 0 && b % 2 != 0)
        {
            if (a / 2 != b)
            {
                Y
            }
            else
            {
                N
            }
        }
        else if (a % 2 != 0 && b % 2 == 0)
        {
            if (b / 2 != a)
            {
                Y
            }
            else
            {
                N
            }
        }
        else
        {
            N
        }
    }
}

int main()
{
    fast
    solve();
}