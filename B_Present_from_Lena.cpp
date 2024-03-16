#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n + 1; i++)
    {
        for (ll j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << " ";
        }
        for (ll k = 0; k < i + 1; k++)
        {
            if (i == n && k == 0)
            {
                cout << k;
            }
            else
            {
                cout << " " << k;
            }
        }
        for (ll l = i - 1; l >= 0; l--)
        {
            cout << " " << l;
        }
        cout << endl;
    }
    for (ll i = 1; i < n + 1; i++)
    {
        for (ll j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        for (ll k = 0; k < n - i + 1; k++)
        {
            cout << " " << k;
        }
        for (ll l = n - i - 1; l >= 0; l--)
        {
            cout << " " << l;
        }
        cout << endl;
    }
}