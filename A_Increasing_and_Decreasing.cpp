#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, y, n;
    for (cin >> t; cin >> x >> y >> n;)
    {
        auto d{y - n * (n - 1) / 2};
        if (x > d)
        {
            cout << -1 << '\n';
            continue;
        }
        cout << x << ' ';
        for (x = d; --n;)
            cout << (x += n) << ' ';
        cout << '\n';
    }
}