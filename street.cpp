#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, l;
    cin >> n >> l;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    double k = a[0];
    double z = l - a[n - 1];
    double mm = a[0];
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > mm)
        {
            mm = a[i + 1] - a[i];
        }
    }
    mm = mm / 2;
    double res = max(mm, max(k, z));
    string s = to_string(res);
    cout << s;
}