// William's Solution

#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
    LL n, count = 0;
    cin >> n;
    for (LL i = 5; i <= n; i = i * 5)
    {
        count += n / i;
    }
    cout << count << endl;
}