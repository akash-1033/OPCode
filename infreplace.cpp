#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, q;
        cin >> s >> q;
        vector<ll> v(q.begin(), q.end());
        ll n = count(v.begin(), v.end(), 'a');
        if (n > 0 && q.length() > 1)
        {
            cout << "-1" << endl;
        }
        else if (n == 1 && q.length() == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            ll k = pow(2, s.length());
            cout << k << endl;
        }
    }
}