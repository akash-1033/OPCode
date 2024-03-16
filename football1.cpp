#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<string> v;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    ll a = count(v.begin(), v.end(), v[0]);
    ll b = count(v.begin(), v.end(), v[n - 1]);
    if (a > b)
    {
        cout << v[0];
    }
    else
    {
        cout << v[n - 1];
    }
}