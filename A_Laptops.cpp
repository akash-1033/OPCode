#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i].second > v[i + 1].second)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}