#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0, q;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            while (n % 6 == 0)
            {
                n /= 6;
                c++;
            }
            if (n % 3 == 0)
            {
                while(n%6!=0)
                {
                    
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}