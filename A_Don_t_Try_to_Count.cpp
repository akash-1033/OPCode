#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t, n, m;
string x, s;
int main()
{
    scanf("%d", &t);
    while (t--)
    {
        cin >> n >> m >> x >> s;
        for (int i = 0; i <= 10; i++)
        {
            if (x.find(s) != string::npos)
            {
                printf("%d\n", i);
                break;
            }
            else if (i == 10)
            {
                puts("-1");
            }
            x = x + x;
        }
    }
    return 0;
}