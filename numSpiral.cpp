#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long r, c;
        cin >> r >> c;
        long long m = max(r, c);
        if (m % 2 == 0)
        {
            cout << (m * m) - (m - 1) + (r - c) << endl;
        }
        else
        {
            cout << (m * m) - (m - 1) - (r - c) << endl;
        }
    }
}