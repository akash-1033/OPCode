#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long res = 1, c = 0;
    char a = 'A';
    for (char d : s)
    {
        if (d == a)
        {
            c++;
            res = max(res, c);
        }
        else
        {
            a = d;
            c = 1;
        }
    }
    cout << res << endl;
}