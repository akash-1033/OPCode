#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    string s, str = "";
    cin >> s;
    set<char> v(s.begin(), s.end());
    for (char i : v)
    {
        ll k = count(s.begin(), s.end(), i);
        if (k % n != 0)
        {
            cout << -1;
            return 0;
        }
        else
        {
            for (ll j = 0; j < k / n; j++)
            {
                str += i;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << str;
    }
}