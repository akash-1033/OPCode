#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m, sum = 0;
    cin >> n >> m;
    ll arr[m + 1];
    arr[0] = 1;
    for (ll i = 1; i <= m; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < m; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            sum += arr[i + 1] - arr[i];
        }
        else
        {
            sum += arr[i + 1] + n - arr[i];
        }
    }
    cout << sum;
}