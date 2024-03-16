#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a = INT_MAX, b = INT_MAX;
        cin >> n;
        if (n == 1)
        {
            cout << 2 << endl;
        }
        else
        {
            if (n % 3 == 0)
            {
                a = n / 3;
            }
            else if (n % 3 != 0)
            {
                a = (n / 3) + 1;
            }
            if (n % 2 == 0)
            {
                b = n / 2;
            }
            cout << min(a, b) << endl;
        }
    }
}
