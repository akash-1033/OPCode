#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string r, s, t;
    cin >> r >> s >> t;
    r += s;
    if (r.length() != t.length())
    {
        cout << "NO";
    }
    else
    {
        set<char> q(r.begin(), r.end());
        for (char i : q)
        {
            ll w = count(r.begin(), r.end(), i);
            ll e = count(t.begin(), t.end(), i);
            if (w != e)
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
}