#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n], a = 0, b = 0, c = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        b += arr[i];
    }
    sort(arr, arr + n, greater<int>());
    for (ll i = 0; i < n; i++)
    {
        a += arr[i];
        b -= arr[i];
        c++;
        if (a > b)
        {
            cout << c << endl;
            return 0;
        }
    }
}