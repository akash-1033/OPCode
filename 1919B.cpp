#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        string s;
        cin >> s;
        for (char i : s)
        {
            if (i == '-')
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        cout << abs(c) << endl;
    }
}