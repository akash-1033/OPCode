#include <bits/stdc++.h>
using namespace std;

#define ll long long

void change(ll arr[3][3], ll n, ll i, ll j)
{
    if (i == 0 || i == 2 || j == 0 || j == 2)
    {
        for (ll p = 0; p < n; p++)
        {
            arr[i][j] = arr[i][j] & arr[i][j];
            arr[i + 1][j] = arr[i + 1][j] & arr[i + 1][j];
            arr[i][j + 1] = arr[i][j + 1] & arr[i][j + 1];
            arr[i + 1][j + 1] = arr[i + 1][j + 1] & arr[i + 1][j + 1];
        }
    }
}

int main()
{
    ll a[3][3], b[3][3];
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            b[i][j] = 1;
        }
    }
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            if (a[i][j] > 0)
            {
                change(b, a[i][j], i, j);
            }
        }
    }
}