#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << "1";
    }
    else
    {
        ll k = n % 4;
        if (k == 0)
        {
            cout << "6";
        }
        else if (k == 1)
        {
            cout << "8";
        }
        else if (k == 2)
        {
            cout << "4";
        }
        else if (k == 3)
        {
            cout << "2";
        }
    }
}