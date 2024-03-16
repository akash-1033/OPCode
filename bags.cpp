#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 0;
    cin >> n;
    ll arr[n], sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        ll k = sum - arr[i];
        if (k % 2 == 0)
        {
            c++;
        }
    }
    cout << c << endl;
}