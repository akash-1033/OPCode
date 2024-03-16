#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, str = "";
    cin >> s;
    ll n = s.length();
    ll i = 0, c = 5;
    while (i < n)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 3;
            if (c == 0)
            {
                str += " ";
                c = 1;
            }
        }
        else
        {
            str += s[i];
            i++;
            c = 0;
        }
    }
    cout << str << endl;
}