#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll n = s.length();
    vector<char> v;
    ;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != '+')
        {
            v.push_back(s[i]);
        }
    }
    sort(v.begin(), v.end());
    ll k = v.size();
    for (ll i = 0; i < k; i++)
    {
        cout << v[i];
        if (i != k - 1)
        {
            cout << "+";
        }
    }
    cout << endl;
}