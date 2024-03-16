#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll sum = 0;
        for (char i : s)
        {
            sum += i;
        }
        cout << sum - 43 - 48 - 48 << endl;
    }
}