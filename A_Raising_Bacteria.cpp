#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m, c = 2;
    cin >> n;
    double k = log2(n);
    ll z = pow(2, floor(k));
    if (z == n)
    {
        cout << "1" << endl;
    }
    else
    {
        if (n > z)
        {
            m = n - z;
            while (m > 0)
            {
                double f = log(m) / log(2);
                ll w = pow(2, floor(f));
                m -= w;
                c++;
            }
            cout << c - 1;
        }
        else
        {
            cout << k;
        }
    }
}