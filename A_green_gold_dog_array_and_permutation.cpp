#include <bits/stdc++.h>
using namespace std;

pair<int, int> a[40001];
int b[40001];
int n;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i].first, a[i].second = i;
        sort(a + 1, a + 1 + n);
        int p = n;
        for (int i = 1; i <= n; i++)
        {
            b[a[i].second] = p--;
        }
        for (int i = 1; i <= n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}