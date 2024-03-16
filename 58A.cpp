#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, str = "hello";
    cin >> s;
    ll k = 0;
    char ch = str[k];
    for (char i : s)
    {
        if (i == ch)
        {
            k++;
            ch = str[k];
            if (k > 4)
            {
                break;
            }
        }
    }
    if (k > 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}