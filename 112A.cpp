#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, a;
    cin >> s >> a;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == a[i])
        {
            continue;
        }
        else if (s[i] < a[i])
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}