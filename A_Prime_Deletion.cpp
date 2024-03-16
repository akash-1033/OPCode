#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << (s.find("1") > s.find("3") ? 31 : 13) << endl;
    }
}