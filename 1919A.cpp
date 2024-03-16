#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll m = a + b;
        if (m % 2 == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
}