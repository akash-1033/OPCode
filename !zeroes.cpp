#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b;
    string s1, s2, s3, x = "", y = "", z = "";
    cin >> a >> b;
    s1 = to_string(a);
    s2 = to_string(b);
    ll c = a + b;
    s3 = to_string(c);
    for (char i : s1)
    {
        if (i != '0')
        {
            x += i;
        }
    }
    for (char i : s2)
    {
        if (i != '0')
        {
            y += i;
        }
    }
    for (char i : s3)
    {
        if (i != '0')
        {
            z += i;
        }
    }
    ll q = stoll(x);
    ll w = stoll(y);
    ll e = stoll(z);
    // cout << q << w << e;
    if (q + w == e)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}