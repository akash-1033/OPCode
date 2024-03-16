#include <bits/stdc++.h>
using namespace std;

#define ll long long

void search(ll a[], ll key, ll n)
{
    ll s = 0, e = n - 1;
    while (s <= e)
    {
        ll mid = s + (e - s) / 2;
        if (a[mid] == key)
        {
            cout << mid + 1 << endl;
            return;
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << s + 1 << endl;
}

int main()
{
    ll n, m, c = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        c += k;
        a[i] = c;
    }
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll j;
        cin >> j;
        search(a, j, n);
    }
}