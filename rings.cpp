#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll func(ll i, ll j)
{
    ll res = 0;
    if ((i == 0) || (i == 9) || (i >= 1 && i <= 8 && (j == 0 || j == 9)))
    {
        res += 1;
    }
    if (((i == 1 || i == 8) && (j >= 1 && j <= 8)) || ((i >= 2 && i <= 7) && (j == 1 || j == 8)))
    {
        res += 2;
    }
    if (((i == 2 || i == 7) && (j >= 2 && j <= 7)) || ((i >= 3 && i <= 6) && (j == 2 || j == 7)))
    {
        res += 3;
    }
    if (((i == 3 || i == 6) && (j >= 3 && j <= 6)) || ((i >= 4 && i <= 5) && (j == 3 || j == 6)))
    {
        res += 4;
    }
    if ((i == 4 || i == 5) && (j >= 4 && j <= 5))
    {
        res += 5;
    }
    return res;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        char ch;
        ll c = 0;
        for (ll i = 0; i < 10; i++)
        {
            for (ll j = 0; j < 10; j++)
            {
                cin >> ch;
                if (ch == 'X')
                {
                    c += func(i, j);
                }
            }
        }
        cout << c << endl;
    }
}