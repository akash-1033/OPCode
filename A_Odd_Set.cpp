#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, n, e = 0, o = 0;
        cin >> n;
        for (ll i = 0; i < 2 * n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if (e > o)
        {
            cout << "No" << endl;
        }
        else
        {
            if ((o - e) % 2 == 0 && (o - e) != 0)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
}