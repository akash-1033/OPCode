#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    if (isPrime(b))
    {
        for (ll i = a + 1; i < b; i++)
        {
            if (isPrime(i))
            {
                cout << "NO" << endl;
                goto label;
            }
        }
        cout << "YES" << endl;
    label:;
    }
    else
    {
        cout << "NO" << endl;
    }
}