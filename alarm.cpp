#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, h, m, res;
        cin >> n >> h >> m;
        ll tym[n];
        ll s = (h * 60) + m;
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            ll w = (a * 60) + b;
            if (s <= w)
            {

                res = w - s;
            }
            else
            {
                res = 1440 - s + w;
            }
            tym[i] = res;
        }
        sort(tym, tym + n);
        ll h1 = tym[0] / 60;
        ll m1 = tym[0] % 60;
        cout << h1 << " " << m1 << endl;
    }
}