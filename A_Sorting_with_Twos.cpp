#include "bits/stdc++.h"
using namespace std;
const int maxn = 200010;
int T, n, a[maxn], lg[maxn];
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 2; i <= n; i++)
            lg[i] = lg[i >> 1] + 1;
        lg[0] = -1;
        int flag = 0;
        for (int i = 1; i < n; i++)
            if (lg[i] == lg[i - 1] && a[i] > a[i + 1])
                flag = 1;
        puts(flag ? "NO" : "YES");
    }
}