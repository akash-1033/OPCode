#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll n, sum = 0;
    cin >> n;
    ll k = s.length();
    ll a[26];
    for (ll i = 0; i < 26; i++)
    {
        cin >> a[i];
    }
    ll i = 1;
    for (ll j : s)
    {
        sum += (ll)((a[j - 97]) * i);
        i++;
    }
    ll mx = *max_element(a, a + 26);
    sum += ((((k + n) * (k + n + 1)) - (k * (k + 1))) / 2) * mx;
    cout << sum;
}