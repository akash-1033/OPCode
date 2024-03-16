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
        ll k;
        cin >> k;
        k--;
        if (n % 2 == 0)
        {
            if (n / 2 >= k)
            {
                cout << 1 + (k - 1) * 2 << endl;
            }
            else
            {
                cout << 2 + ((k - n / 2) - 1) * 2 << endl;
            }
        }
        else
        {
            if ((n / 2) + 1 >= k)
            {
                cout << 1 + (k - 1) * 2 << endl;
            }
            else
            {
                cout << 2 + (k - (n / 2) - 2) * 2 << endl;
            }
        }
    }
    return 0;
}