#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n;
        vector<pair<ll, ll>> vect;
        for (ll i = 0; i < n; i++)
        {
            cin >> q;
            vect.push_back(make_pair(q, i));
        }
        ll k = 0;
        char ch = 'a', s[n];
        sort(vect.begin(), vect.end());
        for (ll i = 0; i < n; i++)
        {
            if (vect[i].first == k)
            {
                s[vect[i].second] = ch;
                ch++;
            }
            else
            {
                ch = 'a';
                s[vect[i].second] = ch;
                ch++;
                k++;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}