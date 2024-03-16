#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> v;
        for (auto i : s)
        {
            v.push_back(i);
        }
        ll u, l;
        for (ll i : v)
        {
            if (i >= 65 && i <= 90 && i != 66)
            {
                u = i;
            }
            if (i >= 97 && i <= 122 && i != 98)
            {
                l = i;
            }
            if (i == 66)
            {
                v.erase(v.begin() + u);
            }
            if (i == 98)
            {
                v.erase(v.begin() + l);
            }
        }
        for (auto i : v)
        {
            cout << i;
        }
        cout << endl;
    }
}