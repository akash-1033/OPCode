#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m, a, k, l;
    cin >> n >> m >> a;
    ll ar1 = n * m;
    ll ar2 = a * a;
    if (ar2 <= ar1)
    {

        m = m - a;
        if (n % a == 0)
        {
            k = n / a;
        }
        else
        {
            k = n / a + 1;
        }
        // cout << m;
        if (m % a == 0)
        {
            l = (m / a) * k;
        }
        else if (m <= a)
        {
            l = k;
        }
        else
        {
            l = (m / a + 1) * k;
        }
        cout << k + l;
    }
    else
    {
        cout << "1" << endl;
    }
}