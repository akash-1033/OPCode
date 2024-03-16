#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k = n / 3;
        ll s = k + 2 * k;
        while (s < n)
        {
            k++;
            s = k + 2 * k;
        }
        if (s - n == 0)
        {
            cout << k << " " << k << endl;
        }
        else if (s - n == 2)
        {
            cout << k << " " << k - 1 << endl;
        }
        else
        {
            cout << k - 1 << " " << k << endl;
        }
    }
}