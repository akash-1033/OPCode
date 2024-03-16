#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k;
    cin >> k;
    ll a[12];
    for (ll i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12, greater<ll>());
    ll sum = 0, i = 0;
    if (sum >= k)
    {
        cout << 0;
        return 0;
    }
    while (i < 12)
    {
        sum += a[i];
        i++;
        if (sum >= k)
        {
            cout << i;
            return 0;
        }
    }
    cout << "-1";
}