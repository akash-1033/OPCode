#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, a = 0, b = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> k;
        if (k == 0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if (a == 0)
    {
        cout << "-1";
    }
    else
    {
        if (b < 9)
        {
            cout << "0";
        }
        else
        {
            ll m = b / 9;
            for (ll i = 0; i < m * 9; i++)
            {
                cout << "5";
            }
            for (ll i = 0; i < a; i++)
            {
                cout << "0";
            }
            cout << endl;
        }
    }
}