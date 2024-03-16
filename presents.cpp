#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    for (ll i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i < n + 1; i++)
    {
        for (ll j = 1; j < n + 1; j++)
        {
            if (i == a[j])
            {
                cout << j << " ";
            }
        }
    }
    cout << endl;
}