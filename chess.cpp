#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, a = 0, d = 0;
    cin >> n;
    string s;
    cin >> s;
    for (char i : s)
    {
        if (i == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton";
    }
    else if (d > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}