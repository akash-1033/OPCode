#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, p = 0;
    cin >> n;
    ll a[7], sum = 0;
    for (ll i = 0; i < 7; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum >= n)
    {
        for (ll i = 0; i < 7; i++)
        {
            p += a[i];
            if (p >= n)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
    else
    {
        if (n % sum == 0)
        {
            p += ((n / sum) - 1) * sum;
            for (ll i = 0; i < 7; i++)
            {
                p += a[i];
                if (p >= n)
                {
                    cout << i + 1;
                    return 0;
                }
            }
        }
        else
        {
            p += (n / sum) * sum;
            for (ll i = 0; i < 7; i++)
            {
                p += a[i];
                if (p >= n)
                {
                    cout << i + 1;
                    return 0;
                }
            }
        }
    }
}