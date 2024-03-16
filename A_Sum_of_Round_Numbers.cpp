#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        ll k = n.length();
        ll p = count(n.begin(), n.end(), '0');
        cout << k - p << endl;
        for (ll i = 0; i < k; i++)
        {
            if (n[i] != '0')
            {
                cout << (ll)(n[i] - 48) * pow(10, k - i - 1) << " ";
            }
        }
        cout << endl;
    }
}