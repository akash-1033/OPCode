#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[n];
        for (auto &x : s)
            cin >> x;
        if (s[0] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}