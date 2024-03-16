#include <bits/stdc++.h>
using namespace std;
int t, n, a[205];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= 2 * n; i++)
            cin >> a[i];
        sort(a + 1, a + 2 * n + 1), cout << a[n] - a[1] + a[2 * n] - a[n + 1] << '\n';
        for (int i = 1; i <= n; i++)
            cout << a[i] << ' ' << a[n + i] << '\n';
    }
    return 0;
}