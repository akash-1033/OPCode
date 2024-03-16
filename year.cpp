#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll y;
    cin >> y;
    for (ll i = y + 1; i > 0; i++)
    {
        string s = to_string(i);
        if (s[0] != s[1] && s[1] != s[2] && s[2] != s[3] && s[0] != s[2] && s[0] != s[3] && s[1] != s[3])
        {
            cout << i << endl;
            return 0;
        }
    }
}