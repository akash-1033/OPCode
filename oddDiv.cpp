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
        if (n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            while (n % 2 != 1)
            {
                n = n / 2;
            }
            if (n % 2 == 1 && n != 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}