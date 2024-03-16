#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, c = 0;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] > 0)
        {
            c++;
        }
    }
    cout << c << endl;
}