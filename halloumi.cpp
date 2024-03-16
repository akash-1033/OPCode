#include <bits/stdc++.h>
using namespace std;

#define ll long long

int check(ll arr[], ll n)
{
    for (ll i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (k >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            int m = check(arr, n);
            if (m == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}