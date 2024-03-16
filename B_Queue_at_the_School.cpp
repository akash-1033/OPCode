#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    while (x--)
    {
        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char a = s[i];
                s[i] = s[i + 1];
                s[i + 1] = a;
                i++;
            }
        }
    }
    cout << s << endl;
}