#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll c = 0;
    for (char i : s)
    {
        if (i == '4' || i == '7')
        {
            c++;
        }
    }
    ll k = stoll(s);
    ll n = s.length();
    if ((c == n) || (k % 4 == 0 || k % 7 == 0 || k % 47 == 0 || k % 74 == 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}