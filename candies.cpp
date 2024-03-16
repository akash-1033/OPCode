#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        double n;
        ll k, l;
        cin >> n;
        for (ll i = 2;; i++)
        {
            ll z = pow(2, i);
            for (ll j = n - 1; j > 0; j--)
            {
                if (z == ((n / j) + 1))
                {
                    k = i;
                    l = j;
                    goto label;
                }
            }
        }
    label:
        cout << l << endl;
    }
}