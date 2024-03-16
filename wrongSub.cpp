#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll k;
    ll z = s.length();
    cin >> k;
    ll n = stoll(s);
    ll i = 0;
    while (i < k)
    {
        if (s[z - 1 - i] != '0')
        {
            n = n - 1;
            z = z + 1;
            s = to_string(n);
        }
        else
        {
            n = n / 10;
            s = to_string(n);
        }
        i++;
    }
    cout << n;
}