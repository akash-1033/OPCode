#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, c = 0;
    cin >> n;
    char s[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> s[i][j];
            if (j == n - i - 1 || j == i)
            {
                char k = s[0][0];
                if (s[i][j] == k)
                {
                    c++;
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
            else
            {
                char k = s[0][1];
                if (k != s[0][0])
                {
                    if (s[i][j] == k)
                    {
                        c++;
                    }
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    if (c == (n * n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}