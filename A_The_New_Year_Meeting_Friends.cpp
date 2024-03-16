#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    cout << (a[2] - a[1]) + (a[1] - a[0]);
}