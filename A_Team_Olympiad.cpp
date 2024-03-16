#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll e;
        cin >> e;
        a.push_back(e);
    }
    ll x = count(a.begin(), a.end(), 1);
    ll y = count(a.begin(), a.end(), 2);
    ll z = count(a.begin(), a.end(), 3);
    if (x < 1 || y < 1 || z < 1)
    {
        cout << 0;
    }
    else
    {
        ll k = min(x, min(y, z));
        cout << k << endl;
        vector<ll> s;
        vector<ll> t;
        vector<ll> u;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                s.push_back(i);
            }
            else if (a[i] == 2)
            {
                t.push_back(i);
            }
            else if (a[i] == 3)
            {
                u.push_back(i);
            }
        }
        for (ll i = 0; i < k; i++)
        {
            cout << s[i] + 1 << " " << t[i] + 1 << " " << u[i] + 1 << " " << endl;
        }
    }
}