#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m, c = 0;
    cin >> n >> m;
    if (m % n == 0)
    {
        ll k = m / n;
        while (k > 1)
        {
            if (k % 3 == 0)
            {
                k /= 3;
                c++;
            }
            else if (k % 2 == 0)
            {
                k /= 2;
                c++;
            }
            else
            {
                cout << "-1";
                return 0;
            }
        }
        cout << c;
    }
    else
    {
        cout << "-1";
    }
}