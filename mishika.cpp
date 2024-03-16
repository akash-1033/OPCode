#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, a = 0, b = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll m, c;
        cin >> m >> c;
        if (m > c)
        {
            a++;
        }
        if (c > m)
        {
            b++;
        }
    }
    if (a > b)
    {
        cout << "Mishka";
    }
    else if (b > a)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
}