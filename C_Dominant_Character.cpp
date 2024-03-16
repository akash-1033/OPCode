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
        ll n, a, b, c;
        cin >> n;
        string s;
        cin >> s;
        for (ll i = 0; i < n - 1; i++)
        {
            a = count(s.begin() + i, s.begin() + i + 2, 'a');
            b = count(s.begin() + i, s.begin() + i + 2, 'b');
            c = count(s.begin() + i, s.begin() + i + 2, 'c');
            if (a > b && a > c)
            {
                cout << 2 << endl;
                goto l;
            }
        }
        for (ll i = 0; i < n - 2; i++)
        {
            a = count(s.begin() + i, s.begin() + i + 3, 'a');
            b = count(s.begin() + i, s.begin() + i + 3, 'b');
            c = count(s.begin() + i, s.begin() + i + 3, 'c');
            if (a > b && a > c)
            {
                cout << 3 << endl;
                goto l;
            }
        }
        for (ll i = 0; i < n - 3; i++)
        {
            a = count(s.begin() + i, s.begin() + i + 4, 'a');
            b = count(s.begin() + i, s.begin() + i + 4, 'b');
            c = count(s.begin() + i, s.begin() + i + 4, 'c');
            if (a > b && a > c)
            {
                cout << 4 << endl;
                goto l;
            }
        }
        for (ll i = 0; i < n - 4; i++)
        {
            a = count(s.begin() + i, s.begin() + i + 5, 'a');
            b = count(s.begin() + i, s.begin() + i + 5, 'b');
            c = count(s.begin() + i, s.begin() + i + 5, 'c');
            if (a > b && a > c)
            {
                cout << 5 << endl;
                goto l;
            }
        }
        for (ll i = 0; i < n - 5; i++)
        {
            a = count(s.begin() + i, s.begin() + i + 6, 'a');
            b = count(s.begin() + i, s.begin() + i + 6, 'b');
            c = count(s.begin() + i, s.begin() + i + 6, 'c');
            if (a > b && a > c)
            {
                cout << 6 << endl;
                goto l;
            }
        }
        for (ll i = 0; i < n - 6; i++)
        {
            a = count(s.begin() + i, s.begin() + i + 7, 'a');
            b = count(s.begin() + i, s.begin() + i + 7, 'b');
            c = count(s.begin() + i, s.begin() + i + 7, 'c');
            if (a > b && a > c)
            {
                cout << 7 << endl;
                goto l;
            }
        }
        cout << "-1" << endl;
    l:;
    }
}

int main()
{
    fast
    solve();
}