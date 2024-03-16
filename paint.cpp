#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string A[8];
        for (int i = 0; i < 8; i++)
        {
            int count = 0;
            cin >> A[i];
            for (int j = 0; j < 8; j++)
                if (A[i][0] == A[i][j])
                    count++;
            if (count == 8)
            {
                cout << "R" << endl;
                goto l;
            }
        }
        cout << "B" << endl;
    l:
        int k;
    }
    return 0;
}