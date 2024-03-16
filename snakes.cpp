#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m, c = 1;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (c == 1)
            {
                for (ll j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";
                cout << endl;
                c = 2;
            }
            else
            {

                cout << "#";
                for (ll j = 1; j < m; j++)
                {
                    cout << ".";
                }
                cout << endl;
                c = 1;
            }
        }
    }
}