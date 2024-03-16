#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll func(ll z, ll n, ll a[])
{
    for (ll i = n - 1; i >= z; i--)
    {
        if (a[i - 1] > a[i])
        {
            return i - 1;
        }
    }
    return z;
}

bool arrSort(ll arr[], ll n)
{
    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)
        if (arr[i - 1] > arr[i])
            return false;

    return true;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], k = n - 1;
        ll z = n;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (arrSort(a, n))
        {
            cout << "0" << endl;
        }
        else
        {
            for (ll i = n - 1; i > 0; i--)
            {
                if (a[i] != a[i - 1])
                {
                    k = i;
                    break;
                }
            }
            z = k;
            for (ll i = z; i >= 0; i--)
            {
                for (ll j = i - 1; j >= 0; j--)
                {
                    if (a[i] == a[j])
                    {
                        k = i;
                        goto label;
                    }
                }
            }
        label:
            for (ll i = z; i > 0; i--)
            {
                if (a[i] != a[i - 1])
                {
                    z = i;
                    break;
                }
            }
            z = func(z, n, a);
            set<ll> s;
            for (ll i = 0; i <= z; i++)
            {
                s.insert(a[i]);
            }
            cout << s.size() << endl;
        }
    }
}