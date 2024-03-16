#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, t;
    cin >> n >> t;
    ll p = to_string(t).length();
    if (p <= n)
    {
        ll k = n - p;
        cout << t;
        for (ll i = 0; i < k; i++)
        {
            cout << "0";
        }
    }
    else
    {
        cout << "-1";
    }
}