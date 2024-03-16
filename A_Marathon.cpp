#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b[3], c = 0;
        cin >> a >> b[0] >> b[1] >> b[2];
        for (ll i = 0; i < 3; i++)
        {
            if (a < b[i])
            {
                c++;
            }
        }
        cout << c << endl;
    }
}