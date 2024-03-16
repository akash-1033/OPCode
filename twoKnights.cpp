// https://onlinetoolz.net/sequences#n=0%206%2028%2096%20252
// (n2*(n2-1))/2 - 4*(n-1)(n-2);

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cout << ((i * i * i * i) - 9 * (i * i) + 24 * i - 16) / 2 << endl;
    }
}