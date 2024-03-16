#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (abs(a - 1) < (abs(b - c) + abs(c - 1)))
        {
            cout << 1 << endl;
        }
        else if (abs(a - 1) > (abs(b - c) + abs(c - 1)))
        {
            cout << 2 << endl;
        }
        else if (abs(a - 1) == (abs(b - c) + abs(c - 1)))
        {
            cout << 3 << endl;
        }
    }
}