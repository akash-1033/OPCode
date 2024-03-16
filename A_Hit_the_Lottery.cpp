#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k = 0;
    cin >> n;
    k += n / 100;
    n = n % 100;
    k += n / 20;
    n = n % 20;
    k += n / 10;
    n = n % 10;
    k += n / 5;
    n = n % 5;
    k += n;
    cout << k;
}