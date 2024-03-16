#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    getline(cin, s);
    set<char> r;
    for (ll i = 1; i < s.length() - 1; i++)
    {
        r.insert(s[i]);
        i += 2;
    }
    cout << r.size();
}