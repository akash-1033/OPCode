#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i = 1, c = 0;
        cin >> n;
        while (true)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                c++;
            }
            if (c == n)
            {
                cout << i << endl;
                goto l;
            }
            i++;
        }
    l:;
    }
}