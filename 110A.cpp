#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll n = s.length();
    ll x = count(s.begin(), s.end(), '4');
    ll y = count(s.begin(), s.end(), '7');
    ll k = x + y;
    if (k == 4 || k == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}