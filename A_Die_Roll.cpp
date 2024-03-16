#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b;
    cin >> a >> b;
    ll k = max(a, b);
    if (k == 1)
    {
        cout << "1/1";
    }
    else
    {
        ll q = 7 - k;
        if (q % 2 == 0)
        {
            cout << q / 2 << "/3";
        }
        else if (q % 3 == 0)
        {
            cout << q / 3 << "/2";
        }
        else
        {
            cout << q << "/6";
        }
    }
}