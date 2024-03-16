#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a[4], c = 1;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a + 4);
    ll t = a[0];
    for (ll i = 1; i < 4; i++)
    {
        if (t == a[i])
        {
            continue;
        }
        else
        {
            t = a[i];
            c++;
        }
    }
    cout << 4 - c;
}