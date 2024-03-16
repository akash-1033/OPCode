#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    string a[m], b[m], s, str = "";
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i].length() <= b[i].length())
        {
            b[i] = a[i];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> s;
        for (ll j = 0; j < m; j++)
        {
            if (!s.compare(a[j]))
            {
                str += b[j] + " ";
            }
        }
    }
    cout << str;
}