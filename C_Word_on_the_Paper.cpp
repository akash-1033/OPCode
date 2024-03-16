#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        for (int i = 0; i < 64; i++)
        {
            cin >> c;
            if (c != '.')
                cout << c;
        }
        cout << "\n";
    }
}