#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll b, a;
        string s;
        cin >> s >> b >> a;
        if (b >= 2400 && a - b > 0)
        {
            cout << "YES";
            goto label;
        }
    }
    cout << "NO";
label:;
}