#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c = 0;
        cin >> n >> a >> b;
        string str = "";
        while (str.length() < n)
        {
            c = 0;
            for (ll j = 0; j < a && str.length() < n; j++)
            {
                if (c < b)
                {
                    str += (char)(97 + c);
                    c++;
                }
                else
                {
                    str += 'a';
                }
            }
        }
        cout << str << endl;
    }
}