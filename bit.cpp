#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, x = 0;
    string s;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == '+' || s[1] == '+' || s[2] == '+')
        {
            x++;
        }
        if (s[0] == '-' || s[1] == '-' || s[2] == '-')
        {
            x--;
        }
    }
    cout << x << endl;
}