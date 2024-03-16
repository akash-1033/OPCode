#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, total, sum = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        sum += a;
    }
    total = (n * (n + 1)) / 2;
    cout << total - sum;
}