#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
            cin >> x, mp[x]++;
        if (mp.size() == 1 || (mp.size() == 2 && abs(mp.begin()->second - prev(mp.end())->second) < 2))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}