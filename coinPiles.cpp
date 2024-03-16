// William's Solution

#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
    LL t;
    cin >> t;
    while (t--)
    {
        LL a, b;
        cin >> a >> b;
        if ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}