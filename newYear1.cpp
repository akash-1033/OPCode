#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, m;
        cin >> h >> m;
        cout << ((23 - h) * 60) + (60 - m) << endl;
    }
}