#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a[5][5], c, b;
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                b = i;
                c = j;
            }
        }
    }
    cout << abs(2 - c) + abs(2 - b);
}