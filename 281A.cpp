#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    if (isupper(s[0]))
    {
        cout << s;
    }
    else
    {
        cout << (char)(toupper(s[0]));
        for (ll i = 1; i < s.length(); i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}