#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    string s = "";
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        if (i > 1 && i <= n)
        {
            s += "that ";
        }
        if (i % 2 == 0)
        {
            s += "I love ";
        }
        else
        {
            s += "I hate ";
        }
    }
    s += "it";
    cout << s << endl;
}