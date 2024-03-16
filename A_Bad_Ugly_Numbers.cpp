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
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 2;
            n = n - 1;
            while (n--)
            {
                cout << 3;
            }
            cout << endl;
        }
    }
}