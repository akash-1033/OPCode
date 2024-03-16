#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, i;
    for (cin >> t; t-- and cin >> n >> m;)
    {
        vector<string> v(n);
        for (auto &s : v)
            cin >> s;
        for (i = 0; m--; i < 4)
            for (auto &s : v)
                if (s[m] == "akiv"[i])
                {
                    i++;
                    break;
                }
        cout << (i == 4 ? "YES\n" : "NO\n");
    }
}