#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b, c = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        c++;
    }
    cout << c;
}