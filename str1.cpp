#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, str = "";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            str += +".";
            str += +s[i];
        }
    }
    cout << str;
}