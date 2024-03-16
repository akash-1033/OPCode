#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll n = s.length(), c = 0;
    if (n == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        while (s.length() != 1)
        {
            ll sum = 0;
            for (ll i = 0; i < s.length(); i++)
            {
                sum += s[i] - 48;
            }
            s = to_string(sum);
            c++;
        }
        cout << c << endl;
    }
}