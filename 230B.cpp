#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, q = 0;
        cin >> a;
        ll c = a / 2;
        ll b = a / 3;
        for (ll i = b; i <= c; i++)
        {
            if (a % i == 0)
            {
                q++;
                if (q > 1)
                {
                    cout << "NO" << endl;
                    goto label;
                }
            }
        }
        cout << "YES" << endl;
    label:;
    }
}