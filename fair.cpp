#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        set<ll> a;
        ll c = 0;
        ll m = stoll(n);
        cout << m;
        for (ll i : n)
        {
            a.insert(i - 48);
        }
        while (true)
        {
            for (ll i : a)
            {
                if (m % i == 0)
                {
                    c++;
                }
            }
            if (c == a.size())
            {
                cout << n << endl;
                break;
            }
            else
            {
                m++;
                c = 0;
            }
        }
    }
}