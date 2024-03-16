#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    for (cin >> t; cin >> n;)
    {
        int a, b, mn = 1e9;
        cin >> a;
        for (int i = 1; i < n; ++i)
            cin >> b, mn = min(mn, b - a), a = b;
        cout << max(0, (mn + 2) / 2) << endl;
    }
}