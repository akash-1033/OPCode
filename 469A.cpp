#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 0, q;
    cin >> n;
    ll a, b;
    cin >> a;
    set<ll> x, y;
    for (ll i = 0; i < a; i++)
    {
        cin >> q;
        x.insert(q);
    }
    cin >> b;
    for (ll i = 0; i < b; i++)
    {
        cin >> q;
        x.insert(q);
    }
    if (x.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}