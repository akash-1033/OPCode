#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b, c = 0;
    cin >> a >> b;
    ll m = a;
    ll i = 0;
    while (m != 0)
    {
        m--;
        c++;
        if (c == b)
        {
            m++;
            c = 0;
        }
        i++;
    }
    cout << i;
}