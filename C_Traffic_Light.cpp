#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, p = 0, c = 0, mx = INT_MIN;
        char ch, a = 'g';
        cin >> n >> ch;
        string s;
        cin >> s;
        if (ch == 'g')
        {
            cout << 0 << endl;
        }
        else
        {
            vector<ll> v, q;
            for (ll i = 0; i < n; i++)
            {
                if (s[i] == ch)
                {
                    v.push_back(i);
                }
                else if (s[i] == a)
                {
                    q.push_back(i);
                    if (c == 0)
                    {
                        m = i;
                        c++;
                    }
                }
            }
            q.push_back(m + n);
            ll i = 0, j = 0;
            while (i < v.size())
            {
                if (v[i] < q[j])
                {
                    mx = max(q[j] - v[i], mx);
                    i++;
                }
                if (q[j] < v[i])
                {
                    j++;
                }
            }
            cout << mx << endl;
        }
    }
}