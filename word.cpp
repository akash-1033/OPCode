#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll u = 0, l = 0;
    for (char i : s)
    {
        if (isupper(i))
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u > l)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
}