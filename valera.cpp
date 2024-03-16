#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, v, c = 0;
    vector<ll> t;
    cin >> n >> v;
    for (ll i = 1; i <= n; i++)
    {
        ll m;
        cin >> m;
        ll k[m];
        for (ll j = 0; j < m; j++)
        {
            cin >> k[j];
        }
        sort(k, k + m);
        if (v > k[0])
        {
            c++;
            t.push_back(i);
        }
    }
    cout << c << endl;
    for (auto i : t)
    {
        cout << i << " ";
    }
    cout << endl;
}