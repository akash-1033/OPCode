#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0, b = 0, c = 0, d = 0;
        cin >> n;
        for (int i = 1, x, y; i <= n; i++)
            cin >> x >> y, a |= x > 0, b |= x < 0, c |= y > 0, d |= y < 0;
        cout << (a && b && c && d ? "NO" : "YES") << '\n';
    }
}