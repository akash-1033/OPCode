// William's Solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, sum = 0;
    cin >> n;
    int arr[n], maxm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxm = max(maxm, arr[i]);
        sum += maxm - arr[i];
    }
    cout << sum << endl;
}