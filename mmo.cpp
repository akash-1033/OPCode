#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b;
        if (a <= b)
        {
            if (n % a == 0)
            {
                c = n / a;
            }
            else
            {
                c = (n / a) + 1;
            }
        }
        else
        {
            c = 1;
        }
        cout << c << endl;
        ;
    }
}