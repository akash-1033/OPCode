#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, pro = 1;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            pro *= a[i];
        }
        if (2023 % pro == 0)
        {
            cout << "YES" << endl;
            cout << (2023 / pro) << " ";
            for (ll i = 0; i < k - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}