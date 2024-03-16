#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll b, c, h;
        cin >> b >> c >> h;
        ll k = c + h;
        if (k < b)
        {
            cout << (2 * k) + 1 << endl;
        }
        else
        {
            cout << (2 * b) - 1 << endl;
        }
    }
}