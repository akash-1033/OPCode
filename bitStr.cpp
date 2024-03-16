// 1e + 7 == 10^9 + 7;
// (a * b) % c == (a % c) * ( b % c);

#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define mod 1000000007

int main()
{
    LL n, m = 1;
    cin >> n;
    for (LL i = 1; i <= n; i++)
    {
        m = m * 2 % mod;
    }
    cout << m << endl;
}