#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s1, s2;
    ll x, y;
    getline(cin, s1);
    getline(cin, s2);
    for (ll i = 0; i < s2.length(); i++)
    {
        if (s2[i] != ' ')
        {
            x = count(s2.begin(), s2.end(), s2[i]);
            y = count(s1.begin(), s1.end(), s2[i]);
            if (y < x)
            {
                cout << "NO" << endl;
                goto label;
            }
        }
    }
    cout << "YES" << endl;
label:;
}