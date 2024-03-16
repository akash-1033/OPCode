#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll res1 = arr[n - 2] - arr[0];
    ll res2 = arr[n - 1] - arr[1];
    cout << min(res1, res2) << endl;
}