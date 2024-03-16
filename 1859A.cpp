#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        vector<ll> v1, v2;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < a[n - 1])
            {
                v1.push_back(a[i]);
            }
            else
            {
                v2.push_back(a[i]);
            }
        }
        if (v1.size() > 0 && v2.size() > 0)
        {
            cout << v1.size() << " " << v2.size() << endl;
            for (auto i : v1)
            {
                cout << i << " ";
            }
            cout << endl;
            for (auto i : v2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}