#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, sum = 0;
    cin >> n;
    ll i = 1;
    while (sum < n)
    {
        sum += i * (i + 1) / 2;
        i++;
    }
    if (sum == n)
    {
        cout << i - 1;
    }
    else
    {
        cout << i - 2;
    }
}